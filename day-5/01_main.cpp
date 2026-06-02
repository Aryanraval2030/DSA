#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter arr length: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}