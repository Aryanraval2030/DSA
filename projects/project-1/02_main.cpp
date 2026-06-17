// Find the Largest and Second Largest Element
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 40, 20, 30, 70, 80, 5, 80};

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Largest Element: " << largest << endl;
    cout << "Second Largest Element: " << secondLargest << endl;

    return 0;
}