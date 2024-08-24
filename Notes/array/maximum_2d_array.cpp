#include <iostream>
#include <limits.h>
using namespace std;
int maximum(int arr[][2], int row, int col)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int arr[2][2];
    int row = 2;
    int col = 2;
    cout << "enter the no. in  the array"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout <<"Maximum No.:" << maximum(arr, row, col);
}