#include <iostream>
#include <vector>
using namespace std;
vector<int> shorted(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> merge;
    int i = 0;
    int j = 0;
    for (; i < arr1.size() && j < arr2.size();)
    {
        if (arr1[i] < arr2[j])
        {
            merge.push_back(arr1[i]);
            i++;
        }
        else
        {
            merge.push_back(arr2[j]);
            j++;
        }
    }

    for (; i < arr1.size(); i++)
    {
        merge.push_back(arr1[i]);
    }

    for (; j < arr2.size(); j++)
    {
        merge.push_back(arr2[j]);
    }

    return merge;
}
int main()
{

    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 8, 10};

    vector result = shorted(arr1, arr2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }

    cout << endl;
    return 0;
}