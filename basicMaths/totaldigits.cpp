#include <iostream>
using namespace std;

int digitsSumThatDivide(int num)
{
    int count = 0;
    int tempNum = num;
    while (tempNum > 0)
    {
        // cout << "temp num start "<<tempNum << endl;
        int rem = tempNum % 10;
        if (rem != 0 && num % rem == 0)
        {
            count += 1;
        }
        // cout << "count" << count;
        tempNum = tempNum / 10;
        // cout << "tempNum end"<<tempNum << endl;
    }
    return count;
}

int sumOfDigits(int num)
{
    int tempNum = num;
    int sum = 0;
    while (tempNum != 0 && tempNum > 0)
    {
        int rem = tempNum % 10;
        sum = sum + rem;
        tempNum /= 10;
    }
    return sum;
}

int main()
{
    int num = 245114;

    int digitsum = sumOfDigits(num);
    cout << "result " << digitsum;

    return 0;
}