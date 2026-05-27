#include <iostream>
using namespace std;
int main()
{

    char name;
    cout << "enter your sentence: ";

    cin >> name;
    cout << endl;
    int uper;
    int lower;
    if (name >= 65 && name <= 90)
    {
        lower++;
        cout << "upercase" << endl;
    }
    else
    {
        uper++;
        cout << "lowercase" << endl;
    }
    return 0;
}