char p[1001], q[1001];
int main()
{
    int j, k, n, m;
    char *a, *b;
    cin >> p >> q;
    if (strlen(p) < strlen(q))//?a???????
    {
        a = q;
        b = p;
    }
    else
    {
        a = p;
        b = q;
    }
    n = strlen(a) - 1;
    m = strlen(b) - 1;
    for (j = n, k = m; k >= 0; -- j, -- k)
        a[j] += b[k] - '0';
    for (j = n; j; -- j)//????
    {
        a[j - 1] += (a[j] - '0') / 10;
        a[j] = (a[j] - '0') % 10 + '0';
    }
    if (a[0] > '9')//???????
    {
        cout << 1;
        a[0] -= 10;
    }
    else
        while (strlen(a) != 1 && a[0] == '0')
            ++ a;
    cout << a << endl;
    return 0;
}
