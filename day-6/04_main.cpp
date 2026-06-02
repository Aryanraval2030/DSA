#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {10, 20, 4, 30};
    int ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
            if (a[i] >= a[j])
            {
                ans == a[i];
                cout << ans;
            }
        }
    }

    cout << endl;
    return 0;
}