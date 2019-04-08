//**************************
//*??????????? **
//*?????? **
//*???2012-11-25 **
//*???1200012957 **
//**************************

int a[100][100];

int sum(int n)
{
	if (n == 1)
	{
		return 0;
	}
	int i, j, p, min, a11;
	for (i = 0; i < n; i++ )
	{
		p = 0;
		for (j = 0; j < n; j++ )
		{
			if (a[i][j] < a[i][p])
			{
				p = j;
			}
		}
		min = a[i][p];
		for (j = 0; j < n; j++ )
		{
			a[i][j] -= min;
		}
	}
	for (i = 0; i < n; i++ )
	{
		p = 0;
		for (j = 0; j < n; j++ )
		{
			if (a[j][i] < a[p][i])
			{
				p = j;
			}
		}
		min = a[p][i];
		for (j = 0; j < n; j++ )
		{
			a[j][i] -= min;
		}
	}
	a11 = a[1][1];
	for (i = 2; i < n; i++ )
	{
		for (j = 0; j < n; j++ )
		{
			a[i - 1][j] = a[i][j];
		}
	}
	for (i = 2; i < n; i++ )
	{
		for (j = 0; j < n - 1; j++ )
		{
			a[j][i - 1] = a[j][i];
		}
	}
	return a11 + sum(n - 1);
}

int main ()
{
	int n, i, j, k;
	cin >> n;
	for (i = 1; i <= n; i++ )
	{
		for (j = 0; j < n; j++ )
		{
			for (k = 0; k < n; k++ )
			{
				cin >> a[j][k];
			}
		}
		cout << sum(n) << endl;
	}

	return 0;
}
		