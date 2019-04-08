int min(int a[100][100], int , int, int);
int main()
{
	int n,a[100][100], m, j, k, t;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				cin >> a[j][k];
			}
		}
		m = 0;
		for (int l = 0; l < n - 1; l++)
		{
			for (j = 0; j < n - l; j++)
			{
				t = min(a, 0, j, n - l);
				for (k = 0; k < n - l; k++)
				{
					a[j][k] -= t;
				}
			}
			for (j = 0; j < n - l; j++)
			{
				t = min(a, 1, j, n - l);
				for (k = 0; k < n - l; k++)
				{
					a[k][j] -= t;
				}
			}
			m += a[1][1];
			for (j = 0; j < n - l; j++)
			{
				for (k = 1; k < n - l - 1; k++)
				{
					a[j][k] = a[j][k + 1];
				}
			}
			for (j = 0; j < n - l - 1; j++)
			{
				for (k = 1; k < n - l - 1; k++)
				{
					a[k][j] = a[k + 1][j];
				}
			}
		}
		cout << m << endl;
	}
	return 0;
}

int min(int a[100][100], int s, int l, int n)
{
	int t;
	if (s == 0)
	{
		t = a[l][0];
		for (int i = 0; i < n; i++)
		{
			if (t > a[l][i])
				t = a[l][i];
		}
	}
	else
	{
		t = a[0][l];
		for (int j = 0; j < n; j++)
		{
			if (t > a[j][l])
				t = a[j][l];
		}
	}
	return t;
}