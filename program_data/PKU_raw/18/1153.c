void zero(int a[][100], int n)	
{
	int i, j, min;
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 1; j < n; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}	
		}
		for (j = 0; j < n; j++)
		{
			a[i][j] -= min;
		}	
	}
	for (j = 0; j < n; j++)
	{
		min = a[0][j];
		for (i = 1; i < n; i++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}	
		}
		for (i = 0; i < n; i++)
		{
			a[i][j] -= min;
		}
	}
}
void trans(int a[][100], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n - 1; j++)
		{
			a[i][j] = a[i][j + 1];
		}
	}
	for (j = 0; j < n; j++)
	{		
		for (i = 1; i < n - 1; i++)
		{
			a[i][j] = a[i + 1][j];
		}
	}
}
int main()
{
	int n, k, a[100][100], i, j, sum;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		for (j = 1; j <= n - 1; j++)
		{
			zero(a, k);	
			sum += a[1][1];
			trans(a, k);
			k--;	
		}
		cout << sum << endl;
	}
	return 0;
}