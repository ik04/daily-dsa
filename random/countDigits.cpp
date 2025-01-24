#include <iostream>
using namespace std;

int countDigits(int n)
{
    int original = n; // Keep the original number for modulo operations
    int count = 0;

    while (n > 0)
    {
        int digit = n % 10; // Extract the last digit
        if (digit != 0 && original % digit == 0)
        { // Check if the digit divides the original number
            count++;
        }
        n /= 10; // Remove the last digit
    }

    return count;
}

int main()
{
    cout << countDigits(35);
}
