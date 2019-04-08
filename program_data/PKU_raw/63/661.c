int main()
{
    int x1, x2, y1, y2;
    int i, j, k, r = 0;
    cin >> x1 >> y1;
    int a[101][101], b[101][101], result[101][101];
    for(i = 1; i <= x1; i++)
    {
          for(j = 1; j <= y1; j++)
                cin >> a[i][j];
    }
    cin >> x2 >> y2;
    for(i = 1; i <= x2; i++)
    {
          for(j = 1; j <= y2; j++)
                cin >> b[i][j];
    }
    for(i = 1; i <= x1; i++)
    {
          for(j = 1; j <= y2; j++)
          {
                for(k = 1; k <= x2; k++)
                {
                      r += a[i][k] * b[k][j];
                }
                result[i][j] = r;
                r = 0;
          }
    }
    for(i = 1; i <= x1; i++)
    {
          for(j = 1; j <= y2; j++)
          {
                if(j == y2)
                     cout << result[i][j] << endl;
                else
                     cout << result[i][j] << " ";
          }
    }
   
    return 0;
}