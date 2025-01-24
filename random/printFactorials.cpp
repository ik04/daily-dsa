#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

std::vector<long long int> factorialNumbers(long long int n)
{
    std::unordered_map<int, long long int> factCache = {
        {0, 1},
        {1, 1}};
    std::vector<long long int> factorials;
    for (int i = 0; i <= n; ++i)
    {
        if (factCache.find(i) == factCache.end())
        {
            factCache[i] = i * factCache[i - 1]; // Calculate factorial
        }
        factorials.push_back(factCache[i]);
    }
    return factorials;
}
int main()
{
}