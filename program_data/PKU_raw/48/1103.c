

int main()
{
    int i, j, m, n;
    int a[10][10], b[10][10];
    cin >> m >> n;
    for(i = 1; i <= 9; i++)
        for(j = 1; j <= 9; j++)
        a[i][j] = 0;
    a[5][5] = m;
    for (int k = 1; k <= n; k++)
    {
        for(i = 1; i <= 9; i++)
            for(j = 1; j <= 9; j++)
            b[i][j] = a[i][j];
            for(i = 1; i <= 9; i++)
            for(j = 1; j <= 9; j++)
            {
            if(b[i][j] != 0)
               {
                   a[i][j] -= b[i][j];
                   if(i <= 8 && i >= 2 && j <= 8 && j >= 2)
                   {
                       for(int p = i - 1; p <= i + 1; p++)
                          for(int q = j - 1; q <= j + 1; q++ )
                          a[p][q] += b[i][j];
                       a[i][j] += b[i][j];

                   }
               }
        }
    }
    for(i = 1; i <= 9; i++)
            {
                for(j = 1; j <= 8; j++)
                    cout << a[i][j] << " ";
                cout << a[i][9] << endl;

            }
    return 0;
}
