#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    int original = x;
    if (x < 0)
    {
        return false;
    }

    int rev = 0;

    while (x > 0)
    {
        int ld = x % 10;
        int rev = (rev * 10) + ld;
        x = x / 10;
    }
    if (rev == original)
    {
        return true;
    }
    return false;
}