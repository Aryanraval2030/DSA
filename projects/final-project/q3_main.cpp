#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &arr1)
{
    cout << "Reverse Array : ";

    for (int i = arr1.size() - 1; i >= 0; i--)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
}

bool palindromeArr(vector<int> &arr1)
{
    int i = 0;
    int j = arr1.size() - 1;

    while (i < j)
    {
        if (arr1[i] != arr1[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

void leadersInArray(vector<int> &arr1)
{
    cout << "Leaders : ";

    for (int i = 0; i < arr1.size(); i++)
    {
        bool leader = true;

        for (int j = i + 1; j < arr1.size(); j++)
        {
            if (arr1[j] > arr1[i])
            {
                leader = false;
                break;
            }
        }

        if (leader)
        {
            cout << arr1[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    vector<int> arr = {11, 27, 5, 3, 9, 2};

    reverseArr(arr);
    if (palindromeArr(arr))
    {
        cout << "Palindrome Array\n";
    }
    else
    {
        cout << "Not a Palindrome Array\n";
    }

    leadersInArray(arr);
    return 0;
}