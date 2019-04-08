int main()
{
	int a[22][22], m, n;
	cin >> m >> n;
	for (int i = 0; i <= m + 1; i++)
	{
		for (int j = 0; j <= n + 1; j++)
		{
			if (i == 0 || i == m + 1 || j == 0 || j == n + 1)
			{
				a[i][j] = 0;
			}
			else
			{
				cin >> a[i][j];
			}
		}
	}
	for (int k = 1; k <= m; k++)
	{
		for (int l = 1; l <= n; l++)
		{
			if (a[k][l] >= a[k - 1][l] && a[k][l] >= a[k + 1][l] && a[k][l] >= a[k][l + 1] && a[k][l] >= a[k][l - 1])
			{
				cout << k - 1 << ' ' << l - 1 << endl;
			}
		}
	}
	return 0;
}