#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// largest elemetn of the array
// int largest(vector<int> &arr)
// {
//     int largestElement = INT_MIN;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] > largestElement)
//         {
//             largestElement = arr[i];
//         }
//     }
//     return largestElement;
// }

// second largest element 
int print2largest(vector<int> &arr)
{
    int largest = arr[0];
    int secondLargest = -1;
    // cout << "arr size" << arr.size();
    if (arr.size() < 2)
    {
        cout << "Array size is less than 2, returning -1" << endl;
        return -1;
    }
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
    return secondLargest;
}

bool isSorted( vector <int> &arr){
    bool sorted = false;
    for (int i = 0; i < arr.size();i++){
        if(arr[i]<arr[i+1]){
            sorted = true;
        cout << sorted;
        }
    }
    if(sorted){
        return true;
    }
    else
        return false;
}

remve duplicates from non decreasing array
int removeDuplicates( vector <int> &arr){
    int k=0;
    for (int i = 0; i < arr.size();i++){
        if(arr[i]!=arr[k]){
            arr[k + 1] = arr[i];
            k++;
        }
    }
    return k + 1;
}

int main()
{

    vector<int> arr = {1,2,5,3,4,1,4,5,6,1,1};
    int value = removeDuplicates(arr);
    cout << (value);

    return 0;
}