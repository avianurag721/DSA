#include <iostream>
#include <vector>
using namespace std;

// [8,7,9,3,5,]

int printArr(vector<int> arr1)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        cout<<i << arr1[i]<< endl;
    }
    return 0;
}

int main()
{

    vector<int> arr = {4, 7, 8, 9, 1};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = 0;
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    printArr(arr);

    return 0;
}
