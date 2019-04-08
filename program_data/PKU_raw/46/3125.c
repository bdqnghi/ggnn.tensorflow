
const int dx[4] = {0, 1, 0, -1};
const int dy[4] = {1, 0, -1, 0};
int n, m, a[110][110], v[110][110];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; ++ i)
        for (int j = 0; j < m; ++ j)
            cin >> a[i][j];
    int x = 0, y = 0, cnt = 0, now = 0;
    while (cnt < n * m)
    {
        ++ cnt;
        v[x][y] = 1;
        cout << a[x][y] << endl;
        if (x + dx[now] < 0 || x + dx[now] >= n || y + dy[now] < 0 || y + dy[now] >= m)
            now = (now + 1) % 4;
        else
            if (v[x+dx[now]][y+dy[now]] == 1)
                now = (now + 1) % 4;
        x += dx[now];
        y += dy[now];
    }
    return 0;
}

