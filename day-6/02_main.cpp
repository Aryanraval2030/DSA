#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; // 5
    cout << "Enter length: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: "; // 1,2,4,4,5
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result;

    for (int i = 0; i < arr.size(); i++) // 1
    {
        bool found = false; // f

        for (int j = 0; j < result.size(); j++) // 0
        {
            if (arr[i] == result[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            result.push_back(arr[i]);
        }
    }

    cout << "After removing duplicates: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}