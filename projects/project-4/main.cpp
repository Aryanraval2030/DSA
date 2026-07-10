#include <iostream>
using namespace std;

class StackBase
{
public:
    virtual void push() = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
};

class Stack : public StackBase
{
private:
    int arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push() override
    {
        if (top == 4)
        {
            cout << endl
                 << "stack is full." << endl;
            return;
        }
        int value;
        cout << "enter value : ";
        cin >> value;
        top++;
        arr[top] = value;
        cout << "element inserted." << endl;
    }
    void pop() override
    {
        if (top == -1)
        {
            cout << endl
                 << "stack is empty." << endl;
            return;
        }
        cout << "deleted element : " << arr[top] << endl;
        top--;
    }
    void topElement() override
    {
        if (top == -1)
        {
            cout << endl
                 << "stack is empty." << endl;
            return;
        }
        cout << "top element : " << arr[top] << endl;
    }
    void isEmpty() override
    {
        if (top == -1)
            cout << "stack is empty." << endl;
        else
            cout << "stack is not empty." << endl;
    }
    void isFull() override
    {
        if (top == 4)
            cout << "stack is full." << endl;
        else
            cout << "stack is not full." << endl;
    }

    void display()
    {
        if (top == -1)
        {
            cout << endl
                 << "stack is empty." << endl;
            return;
        }
        cout << endl
             << "stack elements :" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    int choice;
    do
    {
        cout << endl;
        cout << "===== stack menu =====" << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. top element" << endl;
        cout << "4. check empty" << endl;
        cout << "5. check full" << endl;
        cout << "6. display" << endl;
        cout << "0. exit" << endl;
        cout << "enter choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.push();
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.topElement();
            break;

        case 4:
            s.isEmpty();
            break;

        case 5:
            s.isFull();
            break;

        case 6:
            s.display();
            break;

        case 0:
            cout << endl
                 << "thank you." << endl;
            break;

        default:
            cout << endl
                 << "invalid choice." << endl;
        }
    } while (choice != 0);
    return 0;
}