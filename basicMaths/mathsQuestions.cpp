#include <iostream>
#include <climits>
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

int reverse(int x)
{
    int res = 0;
    int number = x;

    while (number != 0)
    {
        int rem = 0;
        rem = number % 10;
        cout << rem << "rem" << endl;
        if (res > INT_MAX / 10 || res < INT_MIN / 10)
        {
            return 0;
        }
        res = (res * 10) + rem;

        cout << res << "res" << endl;
        number /= 10;
    }
    return res;
}

bool isPalindrome(int num)
{
    int number = num;
    int tempNum = num;
    long long int revNum = 0;
    while (tempNum != 0 && tempNum > 0)
    {
        revNum = (revNum * 10) + (tempNum % 10);
        // cout << "tempNUm" << tempNum;
        // cout << "RevNUm" << revNum;

        tempNum = tempNum / 10;
    }
    if (number == revNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isArmStrong(int n)
{
    int number = n;
    int tempNumber = n;
    int ArmstrongSum = 0;
    while (tempNumber != 0 && tempNumber > 0)
    {

        long long int rem = tempNumber % 10;
        ArmstrongSum = ArmstrongSum + (rem * rem * rem);

        tempNumber /= 10;
    }
    if (number == ArmstrongSum)
    {
        return true;
    }
    else
        return false;
}

int allDivisors(int n)
{
    int number = n;
    int mid = (n + 1) / 2;
    int sumOfDivisors = 0;
    for (int divisor = 1; divisor <= mid; divisor++)
    {
        if (number % divisor == 0)
        {
            sumOfDivisors = sumOfDivisors + divisor;
        }
    }
    cout << sumOfDivisors;
    return sumOfDivisors;
}

int main()
{
    int num = 12;

    // int digitsum = reverse(num);
    allDivisors(num);

    return 0;
}