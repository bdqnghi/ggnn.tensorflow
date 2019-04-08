
int set(int m, int n, int max) // ???m?????n?????????max?????? 
{
    int count = 0;
    if (m == 0)
    {
        return 1;
    }
    if (n == 0 || m > n * max)
    {
        return 0;
    }
    if (m < max)
    {
        max = m;
    }
    for (int i = 1; i <= max; i++)
    {
        count += set(m - i, n - 1, i);
    }
    return count;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int m, n;
        cin >> m >> n;
        cout << set(m, n, 100) << endl;
    }
    return 0;
}