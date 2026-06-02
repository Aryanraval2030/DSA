#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter your size: ";
    cin >> size;

    vector<int> arr(size);

    int maximum = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] > maximum)
        {
            maximum = arr[j];
        }
    }
    cout << maximum;
    cout << endl;

    return 0;
}