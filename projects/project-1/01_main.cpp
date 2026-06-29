// remove duplicate number

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 5, 1, 3, 4, 6, 7, 6, 8, 9, 0, 9};

    for (int i = 0; i < arr.size(); i++)//1
    {
        for (int j = i + 1; j < arr.size(); j++)//1
        {
            if (arr[i] == arr[j])//1==1
            {
                arr.erase(arr.begin() + j);//+2
                j--;//
            }
        }
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}