#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> mergeSort;
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            mergeSort.push_back(arr1[i]);
            i++;
        }
        else
        {
            mergeSort.push_back(arr2[j]);
            j++;
        }
    }
    while (j < arr2.size())
    {
        mergeSort.push_back(arr2[j]);
        j++;
    }
    while (i < arr1.size())
    {
        mergeSort.push_back(arr1[i]);
        i++;
    }

    for (int i = 0; i < mergeSort.size(); i++)
    {
        cout << mergeSort[i];
    }

    return mergeSort;
}

int main()
{
    vector<int> array = {1, 3, 5, 7, 9};
    vector<int> array1 = {2, 4, 6, 8, 10, 12, 14};
    sortArray(array, array1);

    cout << endl;
    return 0;
}