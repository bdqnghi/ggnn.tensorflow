int main()
{
	int p[20][20], i, j, m, n;
	cin >> m >> n;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cin >> p[i][j];
	}
	if (p[0][0] >= p[0][1] && p[0][0] >= p[1][0])
		cout << "0 0" << endl;
	for (i = 1; i < n - 1; i++)
	{
		if (p[0][i] >= p[0][i - 1] && p[0][i] >= p[0][i + 1] && p[0][i] >= p[1][i])
			cout << 0 << " " << i << endl;
	}
	if (p[0][n - 1] >= p[0][n - 2] && p[0][n - 1] >= p[1][n - 1])
		cout << 0 << " " << n - 1 << endl;
	for (i = 1; i < m - 1; i++)
	{
		if (p[i][0] >= p[i][1] && p[i][0] >= p[i + 1][0] && p[i][0] >= p[i - 1][0])
			cout << i << " 0" << endl;
		for (j = 1; j <= n - 2; j++)
		{
			if (p[i][j] >= p[i][j - 1] && p[i][j] >= p[i][j + 1] && p[i][j] >= p[i - 1][j] && p[i][j] >= p[i + 1][j])
				cout << i << " " << j << endl;
		}
		if (p[i][n - 1] >= p[i][n - 2] && p[i][n - 1] >= p[i - 1][n - 1] && p[i][n - 1] >= p[i + 1][n - 1])
			cout << i << " " << n - 1 << endl;
	}
	if (p[m - 1][0] >= p[m - 1][1] && p[m - 1][0] >= p[m - 2][0])
		cout << m - 1 << " " << 0 << endl;
	for (i = 1; i < n - 1; i++)
	{
		if (p[m - 1][i] >= p[m - 1][i - 1] && p[m - 1][i] >= p[m - 1][i + 1] && p[m - 1][i] >= p[m - 2][i])
			cout << m - 1 << " " << i << endl;
	}
	if (p[m - 1][n - 1] >= p[m - 1][n - 2] && p[m - 1][n - 1] >= p[m - 2][n - 1])
		cout << m - 1 << " " << n - 1 << endl;
	return 0;
}
