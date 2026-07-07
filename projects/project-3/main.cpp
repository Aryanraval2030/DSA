#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insert_at_beginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;

        cout << value << " Inserted Successfully.\n";
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty.\n";
            return;
        }

        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void Search(int key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << key << " Found.\n";
                return;
            }
            temp = temp->next;
        }

        cout << key << " Not Found.\n";
    }

    void Delete_node(int key)
    {
        if (head == NULL)
        {
            cout << "Linked List Empty.\n";
            return;
        }

        // First Node Delete
        if (head->data == key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << key << " Deleted .\n";
            return;
        }

        Node *current = head;

        while (current->next != NULL)
        {
            if (current->next->data == key)
            {
                Node *temp = current->next;
                current->next = temp->next;
                delete temp;
                cout << key << " Deleted.\n";
                return;
            }
            current = current->next;
        }
        cout << key << " Not Found.\n";
    }

    void reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *nextNode = NULL;

        while (current != NULL)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
        cout << "Reversed.\n";
    }
};

int main()
{
    LinkedList list;
    int choice, value;
    do
    {
        cout << "1. Insert At Beginning\n";
        cout << "2. Display\n";
        cout << "3. Search\n";
        cout << "4. Delete Node\n";
        cout << "5. Reverse List\n";
        cout << "0. Exit\n";
        cout << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> value;
            list.insert_at_beginning(value);
            break;
        case 2:
            list.display();
            break;
        case 3:
            cout << "Enter Value to Search : ";
            cin >> value;
            list.Search(value);
            break;
        case 4:
            cout << "Enter Value to Delete : ";
            cin >> value;
            list.Delete_node(value);
            break;
        case 5:
            list.reverse();
            break;
        case 0:
            cout << "Thank You.\n";
            break;
        default:
            cout << "Invalid Choice.\n";
        }
    } while (choice != 0);

    return 0;
}