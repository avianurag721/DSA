#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << "uniqueNo";
        cout << arr[i] << " ";
    }
    int uniqueNo = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // cout << uniqueNo;
        uniqueNo = uniqueNo ^ arr[i];
    }

    return uniqueNo;
}

int main()
{

    //   for dynmic array

    // int n;
    // cout << "enter the size of array :";
    // cin >> n;
    // vector<int> arr(n);
    // for (int i = 0; i <arr.size() ; i++)
    // {
    //     cout << "Enter the value at "<<i<<endl;
    //     cin >> arr[i];
    // }
    // cout << "Your entered values are : ";
    // for (auto val: arr){
    //     cout<< " " << val;
    // }
    // int n;
    // cout << "enter the size of the array : ";
    // cin >> n;
    // vector<int> arr(n);
    // cout << "enter the values of the array" << endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }
    // // for (int i = 0; i < arr.size(); i++)
    // // {
    // //     cout << arr[i] << " " << endl;
    // // }
    // int ans = findUnique(arr);
    // cout << "unique no:" << ans;

    // union of the arrray

    // int arr[] = {2, 1, 4, 5, 4};
    // int arrSize = 5;
    // int arr1[] = {
    //     1,
    //     4,
    //     5,
    //     6,
    //     8,
    //     5
    // };
    // int arrSize1 = {6};
    // vector<int> unionArray;
    // cout << "printing array1" << endl;
    // for (int i = 0; i < arrSize;i++)
    // {
    //     cout << arr[i]<<" ";
    //     unionArray.push_back(arr[i]);
    // }
    // cout << endl;
    // cout << "printing array2"<< endl;
    // for (int i = 0; i < arrSize1;i++)
    // {
    //     cout << arr1[i]<<" ";
    //     unionArray.push_back(arr1[i]);
    // }
    // cout << endl;
    // cout << "Printing Union"  << " "<<endl;
    // for (int i = 0; i<unionArray.size();i++)
    // {
    //     cout << unionArray[i]<<" ";
    // }
    // cout << endl;
    // cout << "size of union array  " << unionArray.size();

    // to find intersection
    // vector<int> arr1 = {5, 4, 8, 4, 6, 20,7};
    // vector<int> arr2 = {5,4,5,8,9,6,4,2,6    };
    // vector<int> ans;
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     for (int j = 0; j < arr2.size(); j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             arr2[j] = -1;
    //             ans.push_back(arr1[i]);
    //             break;
    //         }
    //     }
    // }
    // cout << "answer array is : ";
    // for (int k= 0; k < ans.size(); k++)
    // {
    //     cout << ans[k]<<" ";
    // }

    vector<int> arr = {5, 4, 5, 6, 8, 9, 7};
    int sum;
    cout << "Enter the value you weant to search in the array" << endl;
    cin >> sum;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Sum found at index : " << i << "," << j << endl;
            }

        }
    }
}
