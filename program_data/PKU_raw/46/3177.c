int main()
{
    int row, col;
    int i, j, n, time = 0;
    cin >> row >> col;
    int a[100][100];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> a[i][j];
    for (n = 0; ; n++)
    {
        for (i = n; i < col - n; i++)
        {
            cout << a[n][i] << endl;
            time++;
        }
        if (time == row * col)
            break;
        for (j = n + 1; j < row - n; j++)
        {
            cout << a[j][(col - n - 1)] << endl;
            time++;
        }
        if (time == row * col)
            break;
        for (i = col - 2 - n; i >= n; i--)
        {
            cout << a[row - n - 1][i] << endl;
            time++;
        }
        if (time == row * col)
            break;
        for (j = row - 2 - n; j > n; j--)
        {
            cout << a[j][n] << endl;
            time++;
        }
        if (time == row * col)
            break;
    }
    return 0;
}