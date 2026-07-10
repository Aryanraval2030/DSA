#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSortAscending(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSortAscending(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void selectionSortDescending(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main()
{
    vector<int> arr = {14, 43, 10, 44, 35, 89, 29};

    cout << "original array : ";
    display(arr);

    vector<int> bubbleAsc = arr;
    bubbleSortAscending(bubbleAsc);
    cout << "bubble sort ascending : ";
    display(bubbleAsc);

    vector<int> bubbleDesc = arr;
    bubbleSortDescending(bubbleDesc);
    cout << "bubble sort descending : ";
    display(bubbleDesc);

    vector<int> selectionAsc = arr;
    selectionSortAscending(selectionAsc);
    cout << "selection sort ascending : ";
    display(selectionAsc);

    vector<int> selectionDesc = arr;
    selectionSortDescending(selectionDesc);
    cout << "selection sort descending : ";
    display(selectionDesc);

    return 0;
}