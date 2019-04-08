int main()
{
    int m, n, i, j, k, a[11][11], b[11][11];  //??????????10?????
    
    cin >> m >> n;
    
    for(i = 0;i <= 10;i++)
    {
          for(j = 0;j <= 10;j++)
          {
                a[i][j] = b[i][j] = 0;
          }
    }
    
    a[5][5] = b[5][5] = m;
    
    for(i = 1;i <= n;i++)
    {
          for(j = 1;j <= 9;j++)
          {
                for(k = 1;k <= 9;k++)
                {
                      a[j][k] = b[j][k] * 2 + b[j - 1][k - 1] + b[j - 1][k] + b[j - 1][k + 1] + b[j][k - 1] + b[j][k + 1] + b[j + 1][k - 1] + b[j + 1][k] + b[j + 1][k + 1];
                }
          }
          
          for(j = 1;j <= 9;j++)
          {
                for(k = 1;k <= 9;k++)
                {
                      b[j][k] = a[j][k];
                }
          }
    }
    
    for(i = 1;i <= 9;i++)
    {
          for(j = 1;j <= 8;j++)
          {
                cout << a[i][j] << " ";
          }
          cout << a[i][9] << endl;
    }
    
    return 0;
}