#include <iostream>
#include <vector>
using namespace std;

int findQuotient(int dividend, int devisor)
{
    int ans = 0;
    int s = 0;
    int e = dividend;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (mid * devisor == dividend)
        {
            return mid;
        }
        if (mid * devisor > dividend)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int dividend = 40;
    int devisor = 8;
    int quotient = findQuotient(dividend, devisor);
    cout << "Answer is :" << quotient;

    return 0;
}