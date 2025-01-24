#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int left = 0, right = s.size() - 1; // Corrected initialization of right
    while (left < right)
    {
        // Move left pointer if it's not alphanumeric
        while (left < right && !isalnum(s[left]))
        {
            left++;
        }
        // Move right pointer if it's not alphanumeric
        while (left < right && !isalnum(s[right]))
        {
            right--;
        }
        // Compare characters ignoring case
        if (tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
}