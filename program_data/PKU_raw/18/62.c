/*
 * file    homework 10_1
 * author  ??
 * date    2010-12-03
 * description
           ?????????????????a[1][1]??
*/



int Matrix(int a[][100], int sum, int n);

int main()
{
	int a[100][100];
	int n, i, j, k, sum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				cin >> a[j][k];
		Matrix(a, sum, n);
	}
	return 0;
}

int  Matrix(int a[][100], int sum, int n)
{
	int i, j, min;
	if (n == 1)
	{
		cout << sum << endl;
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		min = a[i][0];
		for (j = 1; j < n; j++)
			if (min > a[i][j])
				min = a[i][j];
		for (j = 0; j < n; j++)
			a[i][j] = a[i][j] - min;
	}
	for (i = 0; i < n; i++)
	{
		min = a[0][i];
		for (j = 1; j < n; j++)
			if (min > a[j][i])
				min = a[j][i];
		for (j = 0; j < n; j++)
			a[j][i] = a[j][i] - min;
	}
	sum = sum + a[1][1];
	for (i = 0; i < n; i++)
		for (j = 2; j < n; j++)
			a[i][j - 1] = a[i][j];
	for (i = 0; i < n - 1; i++)
		for (j = 2; j < n; j++)
			a[j - 1][i] = a[j][i];
	Matrix(a, sum, n - 1);
	return 0;
}