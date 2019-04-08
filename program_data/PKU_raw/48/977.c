
int main()
{
	int a[10][10] = {0}, b[10][10] = {0};
	int i, j, m, n;
	cin >> m >> n;
	a[5][5] = m;
	while (n--)
	{
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				if (a[i][j] != 0)
				{
					b[i][j] = b[i][j] + 2 * a[i][j];
					b[i + 1][j] = b[i + 1][j] + a[i][j];
					b[i][j + 1] = b[i][j + 1] + a[i][j];
					b[i][j - 1] = b[i][j - 1] + a[i][j];
					b[i - 1][j] = b[i - 1][j] + a[i][j];
					b[i + 1][j + 1] = b[i + 1][j + 1] + a[i][j];
					b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
					b[i - 1][j + 1] = b[i - 1][j + 1] + a[i][j];
					b[i - 1][j - 1] = b[i - 1][j - 1] + a[i][j];
				}
			}
		}
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= 9; j++)
			{
				a[i][j] = b[i][j];
				b[i][j] = 0;
			}
		}
	}
	
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 8; j++)
			cout << a[i][j] << ' ';
		cout << a[i][9] << endl;
	}
	
	return 0;
}