#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class Linked
{
public:
    Node *head;
    Linked()
    {
        this->head = NULL;
    }

    void insertAtBegin(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void update(int oldValue, int newValue)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == oldValue)
            {
                temp->data = newValue;
                return;
            }
            temp = temp->next;
        }
        cout << "Node not Exist" << endl;
    }

    void between(int space, int value)
    {

        int count = 1;
        Node *temp = head;
        Node *newNode = new Node(value);
        while (temp != NULL)
        {
            if (count == space - 1)
            {
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
            count++;
        }
    }

    void dlt(int value)
    {
        Node *temp = head;
        Node *prev = NULL;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                prev->next = temp->next;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    void dltEnd()
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            // 10,20,30,40,50
            delete temp->next;
            break;
        }
    }

    void traverse()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
int main()
{
    Linked s1;

    s1.insertAtBegin(20);
    s1.insertAtBegin(10);
    s1.insertAtEnd(30);
    s1.insertAtEnd(40);
    s1.update(40, 40);
    s1.between(2, 15);
    s1.dlt(20);
    s1.dltEnd();
    s1.traverse();

    return 0;
}