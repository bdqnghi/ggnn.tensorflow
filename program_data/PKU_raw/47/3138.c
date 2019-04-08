int main()
{
    int n,i;
    1 < n < 100;
    cin >> n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<=n-2;i++)
    {
        b[i] = a[n-i-1];
        cout << b[i] << " ";
    }
       b[n-1] = a[0];
       cout << b[n-1];
        return 0;
}
