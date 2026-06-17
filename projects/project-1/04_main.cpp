// Count Positive, Negative
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 1, -9, 2, -7, -5};
    int count = 0;
    int count1 = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
        else if (arr[i] > 0)
        {
            count1++;
        }
    }

    cout << "negative number : " << count;
    cout << "positive number : " << count1;

    cout << endl;
    return 0;
}