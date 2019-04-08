int main()
{
	int a[100][100], m, n, i, j, k, l, sum;
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		cin >> m >> n;
		sum = 0;
		for (j = 1; j <= m; j++)
		{
			for (l = 1; l <= n; l++)
			{
				cin >> a[j][l];
				if (j == 1 || j == m || l == 1 || l == n)
				{
					sum += a[j][l];
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}