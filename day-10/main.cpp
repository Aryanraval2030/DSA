#include <vector>
#include <iostream>
using namespace std;

vector<int> insertionShort(vector<int> &arr1) // 1, 10, 20, 35, 24, 26
{
    for (int i = 1; i < arr1.size(); i++)
    {
        int j = i;
        while (j > 0 && arr1[j - 1] > arr1[j])
        {
            int temp = arr1[j];
            arr1[j] = arr1[j - 1];
            arr1[j - 1] = temp;
            j--;
        }
    }
    return arr1;
}

int main()
{
    vector<int> array = {1, 10, 20, 35, 24, 26};
    vector<int> result = insertionShort(array);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}