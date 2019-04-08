int main()
{
    int m,n;
    cin >> m >> n;
    int array[m+1][n+1];
    for(int i = 1; i <= m; ++i)
            for(int t = 1; t <= n; ++t)
            cin >> array[i][t];
    int sum = 1;
    int x[3] = {0,0,1};
    int y[3] = {0,1,0};
    int dx = 1, dy = 1, k = 1;
    int tx,ty;
    while(sum <= m*n)
    {
              int xx = dx, yy = dy;
              for(;;)
              {
                     if(xx > m || yy < 1) break;
                     cout << array[xx][yy] << endl;
                     xx = xx + 1, yy = yy - 1;
                     sum++;
              }
              tx = dx + x[k], ty = dy + y[k];
              if(ty > n)
              {
                    k++;
                    tx = dx + x[k], ty = dy + y[k];
              }
              dx = tx, dy = ty;
    }
    //while(1);
    return 0;
}
