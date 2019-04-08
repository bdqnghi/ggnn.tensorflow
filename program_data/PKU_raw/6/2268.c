
int main()
{
	int k, m, n;
	cin >> k;
	int a[100][100];
	int i = 0, j = 0, t = 1;
	for (t = 1; t <= k; t++)
	{
		cin >> m >> n;
		int sum = 0;
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
			if (m == 1 && n == 1)
				cout << a[0][0] << endl;
			else
			{
				for (i = 0; i < m; i++)
				{
					sum += a[i][0] + a[i][n - 1];
					
				}
				for (j = 0; j < n; j++)
				{
					sum += a[0][j] + a[m - 1][j];
				}
				sum = sum - a[0][0] - a[0][n - 1] - a[m - 1][0] - a[m - 1][n -1];
				cout << sum << endl;
			}
	}
	
	return 0;
}


