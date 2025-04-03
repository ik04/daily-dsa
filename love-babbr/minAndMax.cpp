#include <iostream>
#include <vector>

using namespace std;

pair<int, int> getMinMax(vector<int> arr)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return {min, max};
}

int main()
{
    vector<int> arr = {3, 2, 1, 56, 10000, 167};
}