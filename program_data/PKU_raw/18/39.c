
int a[100][100];

int sum(int[100][100], int);

int main()
{
	int n, k, i, j;
	cin >> n;
	for(k = 1; k <= n; k++)
	{
		for(i = 0; i < n; i++)
			for(j = 0; j< n; j++)
			{
				cin >> a[i][j];
			}
		cout << sum(a, n) << endl;
	}
	return 0;
}

int sum(int a[100][100], int n)
{
	int p, i, j, min;
	if(n == 1)
		return 0;
	for(i =	0; i < n; i++)
	{
		min = a[i][0];
		for(j = 1; j < n; j++)
		{
			if(min > a[i][j])
				min = a[i][j];
		}
		for(j = 0; j < n; j++)
		{
			a[i][j] -= min;
		}
	}
	for(i =	0; i < n; i++)
	{
		min = a[0][i];
		for(j = 1; j < n; j++)
		{
			if(min > a[j][i])
				min = a[j][i];
		}
		for(j = 0; j < n; j++)
		{
			a[j][i] -= min;
		}
	}
	p = a[1][1];
	for(i = 0; i < n; i ++)
		for(j = 1; j < n - 1; j++)
		{
			a[i][j] = a[i][j+1];
		}
	for(i = 1; i < n - 1; i++)
		for(j = 0; j < n - 1; j++)
		{
			a[i][j] = a[i + 1][j];
		}
	return p + sum(a, n - 1);
}

