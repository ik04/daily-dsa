#include <iostream>
using namespace std;

void printNos(int N)
{
    if (N == 0)
    {
        return;
    }
    cout << N << " ";
    N = N - 1;
    printNos(N);
}

int main()
{
}