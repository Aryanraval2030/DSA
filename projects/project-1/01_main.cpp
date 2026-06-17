// remove duplicate number

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 1, 3, 4, 6, 7, 6, 8, 9, 0, 9};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                arr.erase(arr.begin() + j);
                j--;
            }
        }
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}