int f(int m, int n)
{
    int i, count = 0, flag = 0;
    if (m == 1)
        return 1;
    for (i = n; i > 1 ; i--)
    {
        if (m % i == 0)
        {
            count += f(m / i, i);
            flag = 1;
        }
    }
    if (flag)
        return count;
    else
    return 0;
}
int main()
{
    int n, k, m, temp;
    cin >> n;
    for (k = 0; k < n; k++)
    {
        cin >> m;
        cout << f(m, m) << endl;
    }
    return 0;
}