int main()
{
    int row, col, a[100][100], t = 0, sum, n = 0;
    cin >> row >> col;
    
    for (int i = 0; i <= row - 1; i++)
    {
        for (int j = 0; j <= col - 1; j++)
        {
            cin >> a[i][j];
        }
    }
    
    sum = row * col;
    while (1)
    {
        for (int i = n; i < col - n; i++)
        {
            cout << a[n][i] << endl;
            t++;
        }
        if (t == sum) break;
        for (int i = n + 1; i < row - n; i++)
        {
            cout << a[i][col - n - 1] << endl;
t++;
        }
        if (t == sum) break;
        for (int i = col - n - 2; i >= n; i--)
        {
            cout << a[row - n - 1][i] << endl;
            t++;
        }
        if (t == sum) break;
        for (int i = row - n - 2; i > n; i--)
        {
            cout << a[i][n] << endl;
            t++;
        }
        if (t == sum) break;
        n++;
    }
    return 0;
}