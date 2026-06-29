#include <iostream>
#include <vector>
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

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->next = third;

    cout << endl;

    return 0;
}