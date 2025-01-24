#include <vector>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int p1 = 0, p2 = arr.size() - 1;
    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
}