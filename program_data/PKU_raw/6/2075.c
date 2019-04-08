int main()
{
	int a[100][99][99] = {0}, m[100], n[100], k, i, j, l, sum[100] = {0}, leap;
	cin >> k;
	for(i = 0; i <= k - 1; i++)
	{
		cin >> m[i] >> n[i];
		for(j = 0; j <= m[i] - 1; j++)
		{
			for(l = 0; l <= n[i] - 1; l++)
			{
				cin >> a[i][j][l];
			}
		}
	}
	for(i = 0; i <= k - 1; i++)
	{
		if(m[i] == 1 && n[i] == 1)
		{
			sum[i] = a[i][0][0];
		}
		else
		{
			for(j = 0; j <= m[i] - 1; j++)
			{
				sum[i] = a[i][j][0] + a[i][j][n[i] - 1] + sum[i];
			}
		}
	}
	for(i = 0; i <= k - 1; i++)
	{
		if(n[i] <= 2)
			leap = 1;
		else
			leap = 0;
		for(j = 1; j <= n[i] - 2; j++)
		{
			if(leap)
				break;
			sum[i] = sum[i] + a[i][0][j] + a[i][m[i] - 1][j];
		}
	}
	for(i = 0; i <= k - 1; i++)
	{
		cout << sum[i] << endl;
	}
	return 0;
}
