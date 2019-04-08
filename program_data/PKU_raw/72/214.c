int main()
{
	int m, n, h[22][22], i, j;

	cin >> m >> n;
	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
			cin >> h[i][j];
	
	for (i = 0; i <= m + 1; i++)
		h[i][0] = h[i][n + 1] = 0;
	for (j = 1; j <= n; j++)
		h[0][j] = h[m + 1][j] = 0;

	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			if (h[i][j] >= h[i - 1][j] && h[i][j] >= h[i + 1][j]
				&& h[i][j] >= h[i][j - 1] && h[i][j] >= h[i][j + 1])
				cout << i - 1 << ' ' << j - 1 << endl;
		}

	return 0;
}