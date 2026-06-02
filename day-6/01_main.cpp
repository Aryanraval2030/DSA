#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter length: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cout << "enter key: ";
    cin >> key;

    bool found = false;

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] == key)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "exists";
    }
    else
    {
        cout << "not exists";
    }

    cout << endl;

    return 0;
}
