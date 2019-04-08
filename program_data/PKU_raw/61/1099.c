int main()
{
    int n,maxi;
    cin >> n;
    int m[n];
    maxi = 0;
    for (int i = 0; i <= n - 1;i++)
    {
        cin >> m[i];
        maxi = max (m[i],maxi);
    }
    int a[maxi];
    a[0] = 1;
    a[1] = 1;
    for (int j = 2; j <= maxi - 1; j++)
    {
        a[j] = a[j - 1] + a[j - 2];
    }
    for (int k = 0; k <= n - 1; k++)
    {
        cout << a[m[k] - 1] << endl;
    }
    return 0;
}