int main()
{
	int a[100][100], r, c, i, j;
	cin >> r >> c;
	for (i = 0; i <= r - 1; i++)
	{
		for (j = 0; j <= c - 1; j++)
		{
			cin >> a[i][j];
		}

	}
	for (j = 0; j <= c - 1; j++)
	{
		for (i = 0; (i <= j) && (i <= r - 1); i++)
		{
			cout << a[i][j - i] << endl;
		}
	}
	for (i = 1; i <= r - 1; i++)
	{
		for (j = 0; (j <= r - i - 1) && (j + 1 <= c); j++)
		{
			cout << a[i + j][c - 1 - j] << endl;
		}
	}
	return 0;
}
