int a[1001][1001], sum = 0;
void reduce(int a[][1001], int n)
{

	int i, j;
	for (i = 0; i < n; i++)                      //??????
	{
		int min = a[i][0];
		for (j = 0; j < n; j++)
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
	for (j = 0; j < n; j++)                     //??????
	{
		int min = a[0][j];
		for (i = 0; i < n; i++)
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
	sum += a[1][1];
	for (i = 0; i < n; i++)                             //?????
	{
		for (j = 1; j < n; j++)
		{
			a[i][j] = a[i][j + 1];
		}
	}
	for (j = 0; j < n; j++)
	{
		for (i = 1; i < n; i++)
		{
			a[i][j] = a[i + 1][j];
		}
	}
}
int main()
{
	int n, i, j, k;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		sum = 0;
		memset(a, 0, sizeof(a));
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		for (i = n; i>1; i--)
		{
			reduce(a, i);
		}
		cout << sum << endl;
	}
	return 0;
}
