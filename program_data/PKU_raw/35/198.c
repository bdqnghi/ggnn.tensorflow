

int main()
{
    int m, n;
    scanf ("%d,%d",&m,&n);
    int a[m][n];
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            cin >> a[i][j];
    int b[m][n];
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            b[i][j] = 0;
    int t = 0;
    for (int i=0; i<m; i++)
    {
        t = 0;
        for (int j=1; j<n; j++)
        {
            if (a[i][j]>a[i][t])
            {
                b[i][t]++;
                t = j;
            }
            else
            {
                b[i][j]++;
            }
        }
    }
    for (int j=0; j<n; j++)
    {
        t = 0;
        for (int i=1; i<m; i++)
        {
            if (a[i][j]<a[t][j])
            {
                b[t][j]++;
                t = i;
            }
            else
            {
                b[i][j]++;
            }
        }
    }

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (b[i][j]==0)
            {
                printf ("%d+%d\n", i, j);
                goto loop1;
            }
        }
    }
    cout << "No" << endl;
    loop1:
    return 0;
}
