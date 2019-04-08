
int a[100][100];
int sum(int n);
int main()
{
	int n;
	cin >> n;
	int k, i, j;
	for (k = 1; k <= n; k++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		cout << sum(n) << endl;
	}
	return 0;
}

int sum(int n)
{
	int i, j;
	int min;
	int num;
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 0; j < n; j++)
			if (a[i][j] < min)
				min = a[i][j];
		for (j = 0; j < n; j++)
			a[i][j] -= min;
	}
	for (j = 0; j < n; j++)
	{
		min = a[0][j];
		for (i = 0; i < n; i++)
			if (a[i][j] < min)
				min = a[i][j];
		for (i = 0; i < n; i++)
			a[i][j] -= min;
	}
	num = a[1][1];
	if (n == 2)
		return num;
	else
	{
		for (i = 2; i < n; i++)
			for (j = 0; j < n; j++)
				a[i - 1][j] = a[i][j];
		for (j = 2; j < n; j++)
			for (i = 0; i < n; i++)
				a[i][j - 1] = a[i][j];
		return num + sum(n - 1);
	}
}

		
