#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubarraySum(vector<int> &arr)
{
    int maxSum = arr[0];
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
}
