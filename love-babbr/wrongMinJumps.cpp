#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int> &arr)
{
    int count = 0;
    int sum = 0;
    int i = 0;
    while (sum < arr.size() - 1)
    {
        if (arr[i] == 0)
        {
            if (i == -1)
            {
                return -1;
            }
            i--;
        }
        else
        {
            sum += arr[i];
            i += arr[i];
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> test = {9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1};
    cout << minJumps(test) << endl;
    return 0;
}