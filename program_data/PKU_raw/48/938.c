
int a[11][11] = {0}, b[11][11] = {0};

void multiply(int d)
{
	int i, j;
	if (d != 0)
	{
		for (i = 1; i <= 9; i++)
			for (j = 1; j <= 9; j++)
			{
				b[i][j] += a[i][j] * 2;
				b[i - 1][j] += a[i][j];
				b[i + 1][j] += a[i][j];
				b[i][j + 1] += a[i][j];
				b[i][j - 1] += a[i][j];
				b[i - 1][j - 1] += a[i][j];
				b[i - 1][j + 1] += a[i][j];
				b[i + 1][j - 1] += a[i][j];
				b[i + 1][j + 1] += a[i][j];
			}
		for (i = 1; i <= 9; i++)
			for (j = 1; j <= 9; j++)
			{
				a[i][j] = b[i][j];
				b[i][j] = 0;
			}
		multiply(d - 1);
	}
}

int main()
{
	int m, n, d;
	int i, j;
	cin >> m >> n;
	a[5][5] = m;
	multiply(n);

	for (i = 1; i <= 9; i++)
		for (j = 1; j <= 9; j++)
		{
			if (j == 1)
			cout << a[i][j];
			else
			{
				cout << " " << a[i][j];
			}
			if (j == 9)
				cout << endl;
		}
	return 0;
}