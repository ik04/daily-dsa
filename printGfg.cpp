#include <iostream>
using namespace std;

int count = 0;
void printGfg(int N)
{
    if (count == N)
    {
        return;
    }
    cout << "GFG" << " ";
    count++;
    printGfg(N);
}

int main()
{
}