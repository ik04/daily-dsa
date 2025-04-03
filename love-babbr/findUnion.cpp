#include <iostream>
#include <vector>
#include <map>

using namespace std;

int findUnion(vector<int> &a, vector<int> &b)
{
    int count = 0;
    map<int, int> freq;
    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i]]++;
    }
    for (int j = 0; j < b.size(); j++)
    {
        freq[b[j]]++;
    }
    for (auto const &it : freq)
    {
        if (it.second > 1)
        {
            count++;
        }
    }
    return count;
}