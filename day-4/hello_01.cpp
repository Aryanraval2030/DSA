#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    for (int i = 0; i < arr.size(); i++)
    {
        int leaders = true;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                leaders = false;
            }
        }
        if (leaders == true)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}