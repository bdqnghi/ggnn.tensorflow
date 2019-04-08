
int main()
{
	int m, n, i, j;
	int a[20][20];
	cin >> m >> n;
	for (i = 0 ; i < m ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
	for (i = 0 ; i < m ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (i - 1 >= 0)
			{
				if (a[i - 1][j] > a[i][j])
				continue;
			}
			if (i + 1 < m)
			{
				if (a[i + 1][j] > a[i][j])
				continue;
			}
			if (j - 1 >= 0)
			{
				if (a[i][j - 1] > a[i][j])
				continue;
			}
			if (j + 1 < n)
			{
				if (a[i][j + 1] > a[i][j])
				continue;
			}
			cout << i << " " << j << endl;
		}
	}
	return 0;
}