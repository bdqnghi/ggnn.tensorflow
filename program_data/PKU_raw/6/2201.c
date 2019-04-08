int main()
{
	int i, k, m, n, a[100][100];
	cin >> k;
	for (i = 1; i <= k; i ++)
	{
		cin >> m >> n;
		int r, s;
		for (r = 0; r < m; r ++)
			for (s = 0; s < n; s ++)
				cin >> a[r][s];
		int sum = 0;
		for (r = 0; r < m; r ++)
			for (s = 0; s < n; s ++)
				if (r == 0 || r == m - 1 || s == 0 || s == n - 1)
					sum = sum + a[r][s];
		cout << sum << endl;
	}
	return 0;
}
