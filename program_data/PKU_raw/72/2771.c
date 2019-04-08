int h[25][25] = {0};
int f(int x, int y)
{
	if (h[x][y] >= h[x - 1][y] && h[x][y] >= h[x + 1][y] && h[x][y] >= h[x][y - 1] && h[x][y] >= h[x][y + 1])
		return 1;
	else
		return 0;
}
int main()
{
	int m, n, i, j;
	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> h[i][j];
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			if (f(i, j))
				cout << i - 1 << " " << j - 1 << endl;
	return 0;
}