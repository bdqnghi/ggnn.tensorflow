int main()
{
	int m, n, i, j, days, left[9][9], seperate[9][9];
	cin >> m >> n;
	int a[9][9] = {0};
	a[4][4] = m;
	for (days = 0; days < n; days++)
	{
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
			{
				left[i][j] = a[i][j] * 2;
				a[i][j] *= 10;
				seperate[i][j] = (a[i][j] - left[i][j]) / 8;
				a[i][j] = left[i][j];
			}
		for (i = 0; i < 9; i++)
			for (j = 0; j < 9; j++)
			{
				a[i + 1][j] += seperate[i][j]; 
				a[i - 1][j] += seperate[i][j]; 
				a[i + 1][j + 1] += seperate[i][j]; 
				a[i - 1][j - 1] += seperate[i][j];
				a[i + 1][j - 1] += seperate[i][j];
				a[i - 1][j + 1] += seperate[i][j];
				a[i][j + 1] += seperate[i][j];
				a[i][j - 1] += seperate[i][j];
			}
	}
	for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 8; j++)
				cout << a[i][j] << " ";
			cout << a[i][8] << endl;
		}
	return 0;
}


