//*************************
//*  ??????? 
//*  ????? 
//*  ???1200012941 
//*  ???2012?9?24? 
//*************************
int main()
{
    char exp[100][100];
    int i, j, k, n, m, a[100][100] = {0};
    cin >> n;
    for (i = 0; i < n; i++)
     for (j = 0; j < n; j++)
     {
         cin >> exp[i][j];
         if (exp[i][j] == '#')
             a[i][j] = -1;
         if (exp[i][j] == '@')
             a[i][j] = 1;
     }
    cin >> m;
    for (k = 1; k < m; k++)
    {
        for (i = 0; i < n; i++)
         for (j = 0; j < n; j++)
         {
             if (a[i][j] == k)
             {
                 if (i+1 < n && a[i+1][j] == 0)
                     a[i+1][j] = k + 1;
                 if (j+1 < n && a[i][j+1] == 0)
                     a[i][j+1] = k + 1;
                 if (i-1 >= 0 && a[i-1][j] == 0)
                     a[i-1][j] = k + 1;
                 if (j-1 >= 0 && a[i][j-1] == 0)
                     a[i][j-1] = k + 1;
             }
         }
    }
    int sum = 0;
    for (i = 0; i < n; i++)
     for (j = 0; j < n; j++)
     {
         if (a[i][j] > 0)
             sum++;
     }
    cout << sum << endl;
    return 0;
}