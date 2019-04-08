int main()
{
    int a[200][200],b[200][200],c[200][200] = {0},x1,y1,x2,y2,i,j,k;
    cin >> x1 >> y1;
    for (i = 1;i <= x1;i++)
        for (j = 1;j <= y1;j++)
        {
            cin >> a[i][j];
        }
    cin >> x2 >> y2;
    for (i = 1;i <= x2;i++)
        for (j = 1;j <= y2;j++)
        {
            cin >> b[i][j];
        }
    for (i = 1;i <= x1;i++)
        for (j = 1;j <= y2;j++)
            for (k = 1;k <= y1;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
    for (i = 1;i <= x1;i++)
        for (j = 1;j <= y2;j++)
        {
            if (y2 != 1)
            {
                   if (j == 1)
                   cout << c[i][j];
                   else if (j != y2)
                   cout << " " << c[i][j];
                   else
                   cout << " " << c[i][j] << endl;
            }
            else
            cout << c[i][j] << endl;
        }
    
    return 0;
}
