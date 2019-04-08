int main()
{
	int m, n, a[9][9] = {0}, b[9][9] = {0}, d[8][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, -1}, {-1, 1}, {-1, -1}, {1, 1}};
	cin >> m >> n;
	a[4][4] = m;
	for (int i = 1; i <= n; i ++)
	{
		for (int j = 0; j < 9; j ++)
			for (int k = 0; k < 9; k ++)
			{
				if (a[j][k] != 0)
				{
					for (int t = 0; t < 8; t ++)
					{
						int x = d[t][0];
						int y = d[t][1];
						b[j + x][k + y] = b[j + x][k + y] + a[j][k];
					}
					b[j][k] = b[j][k] + 2 * a[j][k];
				}
			}
		for (int j = 0; j < 9; j ++)
			for (int k = 0; k < 9; k ++)
			{
				a[j][k] = b[j][k];
				b[j][k] = 0;
			}
	}
	for (int j = 0; j < 9; j ++)
		for (int k = 0; k < 9; k ++)
		{
			if (k < 8)
			{
				cout << a[j][k] << " ";
			}
			if (k == 8)
			{
				cout << a[j][k] << endl;
			}
		}
	return 0;
}