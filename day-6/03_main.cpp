#include <iostream>
#include <vector>
using namespace std;

void leftRotate(int arr[], int n, int k)

{
    //[2,3,4,5,6]

    k = k % n;
    int temp[k]; // temp=[0=2]

    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i]; // 0=2
    }
    for (int i = k; i < n; i++) // 1
    {
        temp[i - k] = arr[i]; // temp[0]=3//1=4//5//6
    }
    for (int i = 0; i < k; i++) //
    {
        arr[n - k + i] = temp[i]; //[4]=2
    }
}
int main()
{
    int n;
    int k = 1;
    cout << "Enter length: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leftRotate(arr.data(), n, k);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}