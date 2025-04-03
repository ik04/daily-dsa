#include <iostream>
#include <vector>

using namespace std;

void segregateElements(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        if (arr[left] >= 0)
        {
            left++;
            if (left < right)
            {
                swap(arr[left], arr[right]);
            }
        }
        if (arr[right] < 0)
        {
            right--;
            if (left < right)
            {
                swap(arr[left], arr[right]);
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, -1, 3, 2, -7, -5, 11, 6};
    segregateElements(arr);
    for (auto i : arr)
    {
        std::cout << i << " ";
    }
    return 0;
}