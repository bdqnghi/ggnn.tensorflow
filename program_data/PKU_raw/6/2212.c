
int main()
{
	int a[100][100], m, n, i, j, k;
	cin >> k;
	for (int t = 1;t <= k;t++)
	{
		int sum = 0;
		cin >> m >> n;
		for (i = 0;i < m;i++)
		{
			for (j = 0;j < n;j++)
			{
				cin >> a[i][j];
			}
		}
		for (i = 0;i < m;i++)
		{
			sum = sum + a[i][0] + a[i][n - 1];
		}
		for (j = 0;j < n;j++)
		{
			sum = sum + a[0][j] + a[m -1][j];
		}
		if  (k == 1)
			sum = sum - 3 * a[0][0];
		else
			sum = sum - a[0][0] - a[0][n - 1] - a[m - 1][0] - a[m - 1][n - 1];
		cout << sum << endl;
	}
	return 0;
}