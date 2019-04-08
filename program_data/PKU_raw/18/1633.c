int f(int n, int a[101][101])
{
	int i, j, min, k;
	for (i = 1; i <= n; i++)
	{
		min = a[i][1];
		for (j = 1; j <= n; j++)
			if (a[i][j] < min)
				min = a[i][j];
		for (j = 1; j <= n; j++)
			a[i][j] -= min;
	}
	for (i = 1; i <= n; i++)
	{
		min = a[1][i];
		for (j = 1; j <= n; j++)
			if (a[j][i] < min)
				min = a[j][i];
		for (j = 1; j <= n; j++)
				a[j][i] -= min;
	}
	if (n == 2)
		return a[2][2];
	else
	{
		k = a[2][2];
		for(i = 3; i <= n; i++)
		{
			a[1][i - 1] = a[1][i];
			a[i - 1][1] = a[i][1];
		}
		for (i = 3; i <= n; i++)
			for (j = 3; j <= n; j++)
				a[i - 1][j - 1] = a[i][j];
		n--;
		return k + f(n, a);
	}
}
int main()
{
	int a[101][101] = {0}, n, i, j, k;
	cin >> n;
	for (k = 1; k <= n; k++)
	{
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				cin >> a[i][j];
		cout << f(n, a) << endl;
		memset(a, 0, sizeof(a));
	}
	return 0;
}