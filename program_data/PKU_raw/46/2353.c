
int main()
{
    int a[100][100], vis[100][100] = {0};
    int row, col, n, x = -1, y = 0;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            cin >> a[j][i];
        }
    n = row * col;
    while (n)
    {
        while (!vis[x + 1][y] && x + 1 < col)
        {
            x++;
            vis[x][y] = 1;
            cout << a[x][y] << endl;
            n--;
        }
        while (!vis[x][y + 1] && y + 1 < row)
        {
            y++;
            vis[x][y] = 1;
            cout << a[x][y] << endl;
            n--;
        }
        while (!vis[x - 1][y] && x > 0)
        {
            x--;
            vis[x][y] = 1;
            cout << a[x][y] << endl;
            n--;
        }
        while (!vis[x][y - 1] && y > 0)
        {
            y--;
            vis[x][y] = 1;
            cout << a[x][y] << endl;
            n--;
        }
    }
   
    
    return 0;
}