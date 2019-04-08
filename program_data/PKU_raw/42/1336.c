int n, a[100001], k;
int main()
{
    int i, j;
    cin >> n;
    for (j = 1; j <= n; ++ j)
        cin >> a[j];
    cin >> k;
    i = 0;
    for (j = 1; j <= n; ++ j)//?i?????????k????????a[j]???i?????k??a[j]?????i?
        if (a[j] == k)
            ++ i;
        else
            a[j - i] = a[j];
    for (j = n - i, i = 1; i < j; ++ i)//??
        cout << a[i] << " ";
    cout << a[i] << endl;
    return 0;
}
