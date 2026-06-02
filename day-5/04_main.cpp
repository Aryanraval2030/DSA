#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of numbers: ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    for (int j = arr.size() - 1; j >= 0; j--)
    {
        cout << "" << arr[j];
    }

    cout << endl;
    return 0;
}