#include <bits/stdc++.h>
using namespace std;

int sumOfSeries(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, 3);
    }
    return sum;
}