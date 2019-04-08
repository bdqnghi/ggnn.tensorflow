int main()
{
    int row, col, i, j, k, l, circle = 0, num = 0;
    cin >> row >> col;
    int a[100][100];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> a[i][j];
    while (true)
    {
        for (i = circle; i < col - circle; i++) 
        {
            cout << a[circle][i] << endl;
            num++;
        }
        if (num == row * col) break;

        for (i--, j = circle + 1; j < row - circle; j++) 
        {
            cout << a[j][i] << endl;
            num++;
        }
        if (num == row * col) break;

        for (j--, k = i - 1; k >= circle; k--) 
        {
            cout << a[j][k] << endl;
            num++;
        }
        if (num == row * col) break;

        for (k++, l = j - 1; l > circle; l--) 
        {
            cout << a[l][k] << endl;
            num++;
        }
        if (num == row * col) break;

        circle++;
    }
    return 0;
}

