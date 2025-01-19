#include <iostream>
using namespace std;

int count = 1;
void printNos(int n)
{
    if (count > n)
    {
        return;
    }

    cout << count << " ";
    count++;
    printNos(n);
}

int main()
{
    printNos(10);
}