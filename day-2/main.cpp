#include <iostream>
using namespace std;

int main()
{

    cout << "print all numbers" << "\n";
    int arr[5] = {1, 2, 3, 4, 5};
            cout << arr << endl;

    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;

        sum = arr[i] + sum;
        }
    cout << "sum of all numbers" << "\n";

    cout << sum << endl;

    return 0;
}