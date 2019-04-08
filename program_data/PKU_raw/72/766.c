

int main()
{
    int n, m, a[50][50] = {{0}} ,i, j, h[500], l[500], cc = 0;
    cin >> n >> m;   //???
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (a[i][j] >= a[i][j+1] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i-1][j])
            {
                h[cc] = i;
                l[cc] = j;
                cc++;
            }
        }
    }
    int to = cc;
    for (i = 0; i < to; i++)
    {
        for (j = 0; j < to - 1; j++)
        {
            if (h[j] > h[j+1])
            {
                int temp;
                temp = h[j+1];
                h[j+1] = h[j];
                h[j] = temp;
                temp = l[j+1];
                l[j+1] = l[j];
                l[j] = temp;
                continue;
            }
            if (h[j] == h[j+1] && l[j] > l[j+1])
            {
                int temp;
                temp = h[j+1];
                h[j+1] = h[j];
                h[j] = temp;
                temp = l[j+1];
                l[j+1] = l[j];
                l[j] = temp;
            }
        }
    }
    for (i = 0; i < to; i++)
    {
        cout << h[i] - 1 << " " << l[i] - 1 << endl;
    }
    return 0;
}
