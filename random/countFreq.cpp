#include <bits/stdc++.h>
using namespace std;

/**
 * You are given an array arr[] containing positive integers.
 * The elements in the array arr[] range from 1 to n (where n is the size of the array),
 * and some numbers may be repeated or absent.
 * Your task is to count the frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).
 */
vector<int> frequencyCount(vector<int> &arr)
{
    map<int, int> hashMp;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        hashMp[arr[i]]++;
    }
    for (auto j : hashMp)
    {
        cout << j.first;
        if (j.second == 0)
        {
            result.push_back(0);
        }
        else
        {
            result.push_back(j.second);
        }
    }
    return result;
}

map<int, int> initMap(int n)
{
}

int main()
{
    vector<int> arr = {2, 3, 2, 3, 5};
    frequencyCount(arr);
}