int main()
{
	char a[102][102];
	int b[102][102], i, j, n, m, k, count = 0;
	memset(a, '\0', sizeof(a));
	memset(b, 0, sizeof(b));
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			cin >> a[i][j];
	cin >> m;
	for (k = 1; k < m; k++)
	{
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (a[i][j] == '@')
					b[i][j] = 1;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (a[i][j] == '@' && b[i][j] == 1)
				{
					if (a[i][j + 1] == '.')
						a[i][j + 1] = '@';
					if (a[i][j - 1] == '.')
						a[i][j - 1] = '@';
					if (a[i + 1][j] == '.')
						a[i + 1][j] = '@';
					if (a[i - 1][j] == '.')
						a[i - 1][j] = '@';
				}
	}
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (a[i][j] == '@')
				count++;
	cout << count;
	return 0;
}