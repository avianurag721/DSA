#include <iostream>
#include <vector>
using namespace std;

int findNum(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            // single element
            return s;
        }
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 3, 3, 4, 4, 6, 6, 7, 7, 5, 8, 8};
    int ans = findNum(arr);
    cout << "answer is " << arr[ans]<<" index is "<<ans;
    return 0;
}
