#include <iostream>
#include <vector>
using namespace std;

void insertElemet(vector<int> &arr1, int index, int element)
{
    if (index >= 0 && index <= arr1.size())
    {
        arr1.insert(arr1.begin() + index, element);
        cout << "Inserted Successfully\n";
    }
    else
    {
        cout << "Invalid Index\n";
    }
}

void deleteElement(vector<int> &arr1, int index)
{
    if (index >= 0 && index < arr1.size())
    {
        arr1.erase(arr1.begin() + index);
        cout << "Deleted Successfully\n";
    }
    else
    {
        cout << "Invalid Index\n";
    }
}

void leftRotate(vector<int> &arr1, int k)
{
    k = k % arr1.size();

    while (k--)
    {
        int first = arr1[0];

        for (int i = 0; i < arr1.size() - 1; i++)
        {
            arr1[i] = arr1[i + 1];
        }

        arr1[arr1.size() - 1] = first;
    }
}


void display(vector<int> &arr1)
{
    cout << "All Elements : ";

    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    display(arr);

    insertElemet(arr, 2, 25);
    deleteElement(arr, 3);
    leftRotate(arr, 2);
   

    return 0;
}