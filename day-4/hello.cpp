#include <iostream>
using namespace std;

// void leftRotate(int arr[], int n, int a)
// {

//     int temp[a]; //[1,2]

//     for (int i = 0; i < a; i++) // 0//1
//     {
//         temp[i] = arr[i]; // 1//2
//     }

//     for (int i = a; i < n; i++) // 2//3//4
//     {
//         arr[i - a] = arr[i]; // 3//4//5
//     }
//     for (int i = 0; i < a; i++) // 0//1
//     {
//         arr[n - a + i] = temp[i]; // 1//2
//     }
// }

void rightRoutate(int arr[], int n, int a)
{
    int temp[a];
    for (int i = 0; i < a; i++)
    {
        temp[i] = arr[n - a + i];
    }

    for (int i = n - a - 1; i >= 0; i--)
    {
        arr[i + a] = arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int a = 2;

    // leftRotate(arr, n, a);
    rightRoutate(arr, n, a);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}