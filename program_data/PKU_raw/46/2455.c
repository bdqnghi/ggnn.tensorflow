int main()
{
    int row, col, count = 0, count0;
    int a[99][99];
    cin >> row >> col;
    for (int i =0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    count0 = row * col;
    for (int k = 0; ;k++, col--, row--)
    {
        for (int i = k; i < col; i++)
        {
            cout << a[k][i] << endl;
            count++;
            if (count == count0)
                break;
        }
        if (count == count0)
            break;
        for (int i = k + 1; i < row; i++)
        {
            cout << a[i][col - 1] << endl;
            count++;
            if (count == count0)
                break;
        }
        if (count == count0)
            break;
        for (int i = col - 2; i >= k; i--)
        {
            cout << a[row - 1][i] << endl;
            count++;
            if (count == count0)
                break;
        }
        if (count == count0)
            break;
        for (int i = row - 2; i >= k + 1; i--)
        {
            cout << a[i][k] << endl;
            count++;
            if (count == count0)
                break;
        }
        if (count == count0)
            break;
    }
    return 0;
}