#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> arr, int n)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    // cout <<"index"<< s<<endl;
    return s;
}
int binarySearch(vector<int> arr, int start, int end, int key)
{
    int s = start;
    int e = end;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (key == mid)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }
    return mid;
}

int main()
{

    vector<int> arr = {5, 6, 7, 2, 4};
    int pivotIndex = pivot(arr, 4);
    int key = 5;
    // cout << arr[pivotIndex] << " pivot"<< endl;
    if (arr[arr.size() - 1] > key && key > arr[pivotIndex])
    {
        cout << key << " is available at index " << binarySearch(arr, pivotIndex, arr.size() - 1, key) << endl;
    }
    else
    {

        cout << key << " key is available at index " << binarySearch(arr, 0, pivotIndex - 1, key);
    }
    return 0;
}