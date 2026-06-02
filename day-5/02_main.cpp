#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter your size: ";
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    int sum = 0;

    for (int j = 0; j < size; j++)
    {
        sum += arr[j];
    }

    cout << "your answer: " << sum;

    // int first;
    // cout << "Enter first number: ";
    // cin >> first;

    // int second;
    // cout << "Enter second number: ";
    // cin >> second;

    // char symbol;
    // cout << "Enter arethmetic operator: ";
    // cin >> symbol;

    // if (symbol == '+')
    // {
    //     sum = first + second;
    // }
    // else if (symbol == '*')
    // {
    //     sum = first * second;
    // }
    // else if (symbol == '/')
    // {
    //     sum = first / second;
    // }
    // else if (symbol == '%')
    // {
    //     sum = first % second;
    // }

    cout << endl;
    return 0;
}
