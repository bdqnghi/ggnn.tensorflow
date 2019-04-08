int main()
{
    int n, a[100000], k, i = 0, j = 0, s = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for (i = 0, j = 0; j < n; j++)
    {
        if (a[j] != k)
        {
            a[i++] = a[j];
        }
        else
            s++;
    }
    for (j = 0; j < n - s - 1; j++)
    cout << a[j] << " ";
    cout << a[n - s - 1] << endl;
    return 0;
}