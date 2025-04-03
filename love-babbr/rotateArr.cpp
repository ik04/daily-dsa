#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &arr)
{
    int index = arr.size() - 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        swap(arr[i], arr[index]);
    }
}

int main()
{
    return 0;
}