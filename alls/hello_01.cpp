#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    cout << "giver number: " << n << endl;
    cout << "total sum : " << sum << endl;

    return 0;
}