#include <iostream>
using namespace std;

void reverse(char arr[],int size){
    int s = 0;
    int e = size - 1;

    while (s<e)
    {
        swap(arr[s++], arr[e--]);
    }
    
}

int lengthofarr(char arr[])
{
    int count = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{

    char arr[20];
    cout << "enter name" << endl;
    cin >> arr;
    cout << "name " << arr << endl;
    int length= lengthofarr(arr);
    reverse(arr, length);
    cout << arr;

    return 0;
}