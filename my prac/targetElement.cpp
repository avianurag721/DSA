#include <iostream>
#include <vector>
using namespace std;

int target(vector<int> arr, int key)
{

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}

int main()
{

    vector<int> arr = {1, 2, 4, 5, 8};
    int ans = target(arr, 5);
    if (ans)
    {

        cout << " key is present at index " << ans;
    }
    else{
        cout << " key not found int  the given array";
    }
    return 0;
}