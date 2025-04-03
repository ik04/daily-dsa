#include <iostream>
#include <string.h>
using namespace std;

string reverseString(string &s)
{
    string reverse;
    for (int i = s.length(); i > 0; i--)
    {
        reverse += s[i - 1];
    }
    return reverse;
}

int main()
{
    string test = "Geeks";
    cout << reverseString(test) << endl;
    return 0;
}