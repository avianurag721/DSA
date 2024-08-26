#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &b)
{
    int size = b.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
        cout << b[i] << " ";
    }
    // return 0;
}

void bubbleSort(vector<int> arr)
{
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> a = {
        15,
        48,
        16,19,65,
        226,
        12,
        1,
    };

    bubbleSort(a);
    return 0;
}
