int main()
{
	int m, n;
	cin >> m >> n;
	int i, j, h[21][21];
	for (i = 0; i <= n + 1; i++)
		h[0][i] = 0;
	for (i = 0; i <= n + 1; i++)
		h[m + 1][i] = 0;
	for (i = 0; i <= m + 1; i++)
		h[i][0] = 0;
	for (i = 0; i <= m + 1; i++)
		h[i][n + 1] = 0;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> h[i][j];
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			if (h[i][j] >= h[i + 1][j] && h[i][j] >= h[i - 1][j] && h[i][j] >= h[i][j + 1] && h[i][j] >= h[i][j - 1])
				cout << i - 1 << " " << j - 1 << endl;
		}
	return 0;
}

	