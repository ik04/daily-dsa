#include <iostream>
#include <vector>
#include <map>

using namespace std;

void sort012(vector<int> &arr)
{
    map<int, int> freq;
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    vector<int> sorted;
    for (auto i : freq)
    {
        for (int j = 0; j < i.second; j++)
        {
            sorted.push_back(i.first);
        }
    }
    arr = sorted;
}

int main()
{
}