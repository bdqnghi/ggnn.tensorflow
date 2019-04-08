int main()
{
    int flag = 0;
    int time = 0;
    int i, j, k = 0;
    int row, col;
    int a[100][100];
    cin >> row >> col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    for (k = 0; k <= row * col; )
    {
        for (j = time; j < col - time ;j++)
        {
            cout << a[time][j] << endl;
            k ++;
            if (k == row * col)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        break;
        for (i = 1 + time; i < row - time; i++)
        {
            cout << a[i][col - 1 - time] << endl;
            k++;
            if (k == row * col)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        break;
        for (j = col - 2 - time ; j > time; j--)
        {
            cout << a[row - 1 - time][j] << endl;
            k ++;
            if (k == row * col)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        break;
        for (i = row - 1 - time; i > time;i--)
        {
            cout << a[i][time] << endl;
            k ++;
            if (k == row * col)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        break;
        time ++;
    }
    return 0;
}