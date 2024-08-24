#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> b)
{
    int size = b.size();

    for (int i = 0; i < size ; i++)
    {
        for (int j = i + 1; j <= size ; j++)
        {
            if (b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
        cout << b[i]<<" ";
    }
    // return 0;
}

int main()
{
    vector<int> a = {15, 42, 48, 226, 12};

    selectionSort(a);
    return 0;
}
