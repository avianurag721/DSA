#include <iostream>
using namespace std;

double sum(double num)
{
    double res = 0;
    int remainNum = num;

    while (remainNum != 0)
    {
        res = res + remainNum % 10;
        remainNum = remainNum / 10;
        // cout << " res" << res<<endl;

        // cout << " reaminnum" << remainNum<<endl;
    }

    return res;
}

int main()
{

    double number = 25569821155;

    double result = sum(number);
    cout << "result " << result;

    return 0;
}