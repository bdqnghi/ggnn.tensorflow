int main()
{
    char a[150][150];
    char b[150][150];
    int n, m, count = 0;
    cin >> n;
    for (int q = 0 ; q <= 149; q++)
        for (int w = 0; w <= 149; w++)
        {
            a[q][w] = '#';
            b[q][w] = a[q][w];
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    cin >> m;
    for (int k = 2; k <= m; k++)
    {
        for (int e = 1; e <= n; e++)
            for (int r = 1; r <= n; r++)
                {
                     if (a[e][r] == '@')
                    {
                        if (a[e][r + 1] == '.')
                            b[e][r + 1] = '@';
                        if (a[e][r - 1] == '.')
                            b[e][r - 1] = '@';
                        if (a[e + 1][r] == '.')
                            b[e + 1][r] = '@';
                        if (a[e - 1][r] == '.')
                            b[e - 1][r] = '@';
                    }
                }
        for(int z = 1; z <= n; z++)
            for (int x = 1; x <= n; x++)
                a[z][x] = b[z][x];
    }
    for (int t = 1; t <= n; t++)
        for (int y = 1; y <= n; y++)
            if (a[t][y] == '@')
                count++;
    cout << count << endl;
    return 0;
}
