
int main()
{
	int n, i, j, min;
	int a[103][103];
	cin >> n;
	for (int count = 1; count <= n; count++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		int n0 = n, sum = 0;
		while (n0 >= 2)
		{
			for (i = 0; i < n0; i++)
			{
				min = a[i][0];
				for (j = 1; j < n0; j++)
				{
					if (a[i][j] < min)
						min = a[i][j];
				}
				for (j = 0; j < n0; j++)
				{
					a[i][j] -= min;
				}
			}
			for (j = 0; j < n0; j++)
			{
				min = a[0][j];
				for (i = 1; i < n0; i++)
				{
					if (a[i][j] < min)
						min = a[i][j];
				}
				for (i = 0; i < n0; i++)
				{
					a[i][j] -= min;
				}
			}
			sum += a[1][1];
			for (i = 1; i < n0; i++)
				for (j = 0; j < n0; j++)
					a[i][j] = a[i+1][j];
			for (j = 1; j < n0; j++)
				for (i = 0; i < n0; i++)
					a[i][j] = a[i][j+1];
			n0--;
		}
		cout << sum << endl;
	}
	return 0;
}
