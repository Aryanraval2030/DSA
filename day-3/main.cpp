#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // - check Array is palindrome or not

    // - Remove Duplicates elements in array

    vector<int> arr = {1, 2, 3, 4, 5};

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << " " << endl;
    }
    int start;
    int last;
    for (int i = 0; i < arr.size(); i++)
    {
        start = arr[i];
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            last = arr[i];
        }
        if (start == last)
        {
            cout << "palindrome" << endl;
        }
        else
        {
            cout << "not palindrome" << endl;
        }
    }
    return 0;
}