int a[100][100] = {0}, sum = 0;
void guiling(int n)
{
	int i, j, min;
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		for (j = 0; j < n; j++)
			a[i][j] -= min;
	}
	for (j = 0; j < n; j++)
	{
		min = a[0][j];
		for (i = 0; i < n; i++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		if (min != 0)
		{
			for (i = 0; i < n; i++)
				a[i][j] -= min;
		}
	}
}
void xiaojian(int n)
{
	int i, j;
	sum += a[1][1];
	for (i = 2; i < n; i++)
		a[i - 1][0] = a[i][0];
	for (j = 2; j < n; j++)
		a[0][j - 1] = a[0][j];
	for (i = 2; i < n; i++)
		for (j = 2; j < n; j++)
			a[i - 1][j - 1] = a[i][j];
}

int main()
{
	int i, j, n, k, m;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		m = n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	while (m > 2)
	{
		guiling(m);
		xiaojian(m);
		m--;
	}
	guiling(2);
	sum += a[1][1];
	cout << sum << endl;
	sum = 0;
	}
	return 0;
}

