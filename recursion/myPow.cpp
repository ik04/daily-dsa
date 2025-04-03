double myPow(double x, int n)
{
    if (n == 1 || n == 0)
    {
        return x;
    }
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }
    return x * myPow(x, n - 1);
}