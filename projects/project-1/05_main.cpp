#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {11, 44, 38, 28, 51, 85, 73, 62, 90};
    vector<int> even;
    vector<int> odd;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }

    for (int i = 0; i < even.size() - 1; i++)
    {
        for (int j = 0; j < even.size() - i - 1; j++)
        {
            if (even[j] > even[j + 1])
            {
                swap(even[j], even[j + 1]);
            }
        }
    }

    for (int i = 0; i < odd.size() - 1; i++)
    {
        for (int j = 0; j < odd.size() - i - 1; j++)
        {
            if (odd[j] < odd[j + 1])
            {
                swap(odd[j], odd[j + 1]);
            }
        }
    }

    cout << "Even Numbers in Ascending: ";
    for (int num : even)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Odd Numbers in Descending: ";
    for (int num : odd)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}