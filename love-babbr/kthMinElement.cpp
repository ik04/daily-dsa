#include <iostream>
#include <vector>
using namespace std;

vector<int> sortVector(vector<int> arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int kthSmallest(vector<int> &arr, int k)
{
    vector<int> sorted = sortVector(arr);
    return sorted[k];
}

int main()
{
}