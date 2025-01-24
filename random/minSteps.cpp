#include <iostream>
#include <vector>
using namespace std;

int minJumps(vector<int> &arr)
{
    int pos = 0;
    int steps = 0;
    int lastPos = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pos == lastPos)
        {
            return steps;
        }

        for (int j = 0; j < arr[i]; j++)
        {
            pos++;
        }
        steps++;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(arr) << "\n";
    minJumps(arr);
}
