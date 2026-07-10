#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, -5, 2, 50, 75, 18, -43, -1, 0};

    int countNegative = 0;
    int countPositive = 0;
    int countEven = 0;
    int countOdd = 0;

    // =======

    int sum = 0;
    int min = arr[0];
    int max = arr[0];
    float average;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            countNegative++;
        }
        else
        {
            countPositive++;
        }

        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        sum = sum + arr[i];
        average = (float)sum / arr.size();
    }

    cout << "total negative numbers : " << countNegative << endl;
    cout << "total positive numbers : " << countPositive << endl;
    cout << "total odd numbers : " << countOdd << endl;
    cout << "total even numbers : " << countEven << endl;
    cout << "minimum : " << min << endl;
    cout << "maximum : " << max << endl;
    cout << "total sum : " << sum << endl;
    cout << "average : " << average;

    cout << endl;

    return 0;
}