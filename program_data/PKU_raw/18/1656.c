int a[200][200], sum = 0;
void solve(int n)
{
	if (n != 1)
	{
	for (int i = 0; i < n; i ++)
	{
		int min = a[i][0];
		for (int j = 0; j < n; j ++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
		for (int j = 0; j < n; j ++)
		{
			a[i][j] -= min;
		}
	}
	for (int i = 0; i < n; i ++)
	{
		int min = a[0][i];
		for (int j = 0; j < n; j ++)
		{
			if (min > a[j][i])
			{
				min = a[j][i];
			}
		}
		for (int j = 0; j < n; j ++)
		{
			a[j][i] -= min;
		}
	}
	sum += a[1][1];
	for (int i = 1; i < n - 1; i ++)
	{
		a[i][0] = a[i + 1][0];
		a[0][i] = a[0][i + 1];
	}
	for (int i = 1; i < n - 1; i ++)
		for (int j = 1; j < n - 1; j ++)
		{
			a[i][j] = a[i + 1][j + 1];
		}
	solve(n - 1);
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++)
	{
		for (int j = 0; j < n; j ++)
			for (int k = 0; k < n; k ++)
			{
				cin >> a[j][k];
			}
			solve(n);
			cout << sum << endl;
			sum = 0;
	}
	return 0;
}

	