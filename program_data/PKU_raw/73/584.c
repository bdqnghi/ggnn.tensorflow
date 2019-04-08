int main()
{
    int a[10][10],i,j,cnt = 0;
    for (i = 1;i <= 5;i++)
        for (j = 1;j <= 5;j++)
        {
            cin >> a[i][j];
        }
    for (i = 1;i <= 5;i++)
        for (j = 1;j <= 5;j++)
        {
            if (a[i][j] <= a[1][j] && a[i][j] <= a[2][j] && a[i][j] <= a[3][j] && a[i][j] <= a[4][j] && a[i][j] <= a[5][j]
                && a[i][j] >= a[i][1] && a[i][j] >= a[i][2] && a[i][j] >= a[i][3] && a[i][j] >= a[i][4] && a[i][j] >= a[i][5])
            {
                cout << i << " " << j << " " << a[i][j] << endl;
                cnt++;
            }
        }
    if (cnt == 0)
    cout << "not found" << endl;
       return 0;
}