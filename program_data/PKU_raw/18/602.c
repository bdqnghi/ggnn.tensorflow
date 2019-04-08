

int main()
{
	int a[200][200] = {{0},{0}},i,j = 0,sum,q = 0,k,n,m,s;
	cin >> n;
	for (k = 1; k <= n;k++)
	{
		sum = 0;
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				cin >> a[i][j];

		for (s = 0; s < n; s++)
		{

		for (i = 1; i <= n - s; i++)
		{
			m = a[i][1];
			for (j = 1; j <= n - s; j++)
			{
				if (a[i][j] < m)
				{
					m = a[i][j];
				}
			}
			for (j = 1; j <= n - s; j++)
			{
				a[i][j] = a[i][j] - m;
			}
		}
		
		for (j = 1; j <= n - s; j++)
		{
			m = a[1][j];
			for (i = 1; i <= n - s; i++)
			{
				if (a[i][j] < m)
				{
					m = a[i][j];
				}
			}
			for (i = 1; i <= n - s; i++)
			{
				a[i][j] = a[i][j] - m;
			}
		}

		sum = sum + a[2][2];
		for (i = 1; i <= n - s; i++)
		{
			for (j = 2; j <= n;j++)
			{
				a[i][j] = a[i][j+1];
			}
		}
		for (j = 1; j <= n - s; j++)
		{
			for (i = 2; i <= n;i++)
			{
				a[i][j] = a[i+1][j];
			}
		}

		}
		cout << sum << endl;
	}
	return 0;
}

