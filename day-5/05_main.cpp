#include <iostream>
#include <vector>

using namespace std;
int main()
{

    int odd = 0;
    int even = 0;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }
    cout << "total odd number: " << odd << "\n";
    cout << "total even number: " << even << "\n";
    cout << endl;
    return 0;
}