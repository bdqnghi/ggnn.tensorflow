
int a[100][100];

void minus_row_col(int n)
{
	int row[100], col[100], min_row = 10000, min_col = 10000, i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min_row)
				min_row = a[i][j];
		}
		row[i] = min_row;
		min_row = 10000;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] -= row[i];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[j][i] < min_col)
				min_col = a[j][i];
		}
		col[i] = min_col;
		min_col = 10000;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[j][i] -= col[i];
}

void delete_row_col(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 1; j < n; j++)
			a[i][j] = a[i][j + 1];
	for (j = 0; j < n; j++)
		for (i = 1; i < n; i++)
			a[i][j] = a[i + 1][j];
}

int main()
{
	int n, i, j, k, sum;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				scanf("%d", &a[j][k]);
		sum = 0;
		int num = n;
		while (num != 1)
		{
			minus_row_col(num);
			sum += a[1][1];
			delete_row_col(num);
			num--;
		}
		printf("%d\n", sum);
	}
	return 0;
}