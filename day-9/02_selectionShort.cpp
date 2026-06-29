#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> selection(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++) // 0
    {
        int min = INT_MAX;
        int minIndex = 0;
        for (int j = i; j < arr.size(); j++) // 0//1//2//3//4
        {
            if (arr[j] < min) // 23<12//45<23//40<45//2<40//1<2
            {
                min = arr[j]; // 23//40//2//1
                minIndex = j; // 0//2//3//4
            }
        }
        int temp = arr[i];      // 0
        arr[i] = arr[minIndex]; // 1
        arr[minIndex] = temp;   // 0
    }

    return arr;
}
int main()
{
    vector<int> arr1 = {23, 45, 40, 2, 1};
    vector<int> result = selection(arr1);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}