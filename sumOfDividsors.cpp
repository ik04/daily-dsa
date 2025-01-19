#include <iostream>
#include <vector>

using namespace std;
/**
 * Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.
 */

int F(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int sumOfDivisors(int n)
{
    int totalSum = 0;
    for (int i = 1; i <= n; i++)
    {
        totalSum += F(i);
    }
    return totalSum;
}

int main()
{
    cout << sumOfDivisors(500) << endl;
}