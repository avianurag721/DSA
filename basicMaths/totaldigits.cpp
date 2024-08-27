#include <iostream>
using namespace std;

int digitsSum(int num)
{
    int count = 0;
    int tempNum = num;
    while (tempNum > 0)
    {
        // cout << "temp num start "<<tempNum << endl;
        int rem = tempNum % 10;
        if (rem!=0&& num % rem == 0)
        {
            count +=1;
        }
        // cout << "count" << count;
        tempNum = tempNum / 10;
        // cout << "tempNum end"<<tempNum << endl;
    }
    return count;
}

int main()
{
    int num =245;

    int digitsum = digitsSum(num);
    cout<<"result " << digitsum;

    return 0;
}