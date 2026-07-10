#include <iostream>
#include <vector>
using namespace std;

void displayDynamicArray(int *arr, int size)
{
    cout << "dynamic array : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void display(vector<int> &arr)
{
    cout << "vector elements : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int size;

    cout << "enter size of dynamic array : ";
    cin >> size;

    int *arr = new int[size];

    cout << "enter elements : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    displayDynamicArray(arr, size);

    delete[] arr;

    cout << "dynamic array deleted" << endl;

    vector<int> vec = {10, 20, 30, 40};

    cout << "original ";
    display(vec);

    vec.push_back(50);
    vec.insert(vec.begin() + 2, 25);

    cout << "after insertion ";
    display(vec);

    vec.pop_back();
    vec.erase(vec.begin() + 1);

    cout << "after deletion ";
    display(vec);

    return 0;
}