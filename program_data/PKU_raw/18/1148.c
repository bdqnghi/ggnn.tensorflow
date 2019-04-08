int n, a[101][101], s;
void cal()
{
    int i, j, k, l, m;
    for (j = 0; j < n; ++ j)
        for (k = 0; k < n; ++ k)
            cin >> a[j][k];
    s = 0;
    for (j = 0; j < n; ++ j)
    {
        for (k = j; k < n; ++ k)//?????????????????
        {
            for (m = l = j; l < n; ++ l)
                if (a[k][l] < a[k][m])
                    m = l;
            m = a[k][m];
            for (l = j; l < n; ++ l)
                a[k][l] -= m;
        }
        for (k = j; k < n; ++ k)//?????????????????
        {
            for (m = l = j; l < n; ++ l)
                if (a[l][k] < a[m][k])
                    m = l;
            m = a[m][k];
            for (l = j; l < n; ++ l)
                a[l][k] -= m;
        }
        s += a[j + 1][j + 1];
        for (k = j + 1; k < n; ++ k)//?????????????
        {
            a[j + 1][k] = a[j][k];
            a[k][j + 1] = a[k][j];
        }
        a[j + 1][j + 1] = a[j][j];
    }
    return;
}
int main()
{
    int i;
    cin >> n;
    for (i = 1; i <= n; ++ i)
    {
        cal();//??s
        cout << s << endl;
    }
}
