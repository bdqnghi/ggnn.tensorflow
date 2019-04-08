int cut(int a[100][100], int);
int main()
{
	int n, a[100][100], i, j, k;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		cout << cut(a, n) << endl;
	}
	return 0;
}
int cut(int a[100][100], int n)
{
	int i, j, min, count;
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 1; j < n; j++)
			min = (min > a[i][j])?a[i][j]:min;
		for (j = 0; j < n; j++)
			a[i][j] = a[i][j] - min;
	}
	for (i = 0; i < n; i++)
	{
		min = a[0][i];
		for (j = 1; j < n; j++)
			min = (min > a[j][i])?a[j][i]:min;
		for (j = 0; j < n; j++)
			a[j][i] = a[j][i] - min;
	}
	count = a[1][1];
	if (n == 2)
		return count;
	for (i = 1; i < n - 1; i++)
	{
		a[0][i] = a[0][i+1];
		a[i][0] = a[i+1][0];
	}
	for (i = 2; i < n; i++)
	{
		for (j = 2; j < n; j++)
			a[i-1][j-1] = a[i][j];
	}
	return (cut(a, n - 1) + count);
}








	



