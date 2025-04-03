#include <iostream>
#include <string.h>

using namespace std;

string reverseString(string &s)
{
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

int main()
{
    string test = "Geeks";
    cout << reverseString(test) << endl;
    return 0;
}