int main()
{
	int a[9][9] = {0}, b[9][9] = {0};
	int n, m;
	cin >> n >> m;
	a[4][4] = n;
	b[4][4] = n;
	for(m; m > 0; m--)
	{
		int c[9][9] = {0};
		for(int i = 0; i < 9; i++)
		{
			for(int j = 0; j < 9; j++)
			{
				if(a[i][j] != 0)
				{
					b[i][j] += a[i][j];
					b[i][j + 1] += a[i][j];
					b[i][j - 1] += a[i][j];
					b[i + 1][j] += a[i][j];
					b[i - 1][j] += a[i][j];
					b[i + 1][j + 1] += a[i][j];
					b[i + 1][j - 1] += a[i][j];
					b[i - 1][j + 1] += a[i][j];
					b[i - 1][j - 1] += a[i][j];
				}
			}
		}
		for(int x = 0; x < 9; x++)
		{
			for(int y = 0; y < 9; y++)
			{
				a[x][y] = b[x][y];
			}
		}
	}
	for(int x = 0; x < 9; x++)
	{
		for(int y = 0; y < 9; y++)
		{
			cout << a[x][y];
			if(y < 8) cout << " ";
		}
		cout << endl << endl;
	}
	return 0;
}