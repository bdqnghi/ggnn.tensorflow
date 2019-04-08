int main()
{
	int i, j, m, day, a[9][9] = {0};
	cin >> m >> day;
	a[4][4] = m;
	while(day--)
	{
		int b[9][9] = {0};
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				if(a[i][j] > 0)
				{
					b[i - 1][j - 1] += a[i][j];
					b[i - 1][j] += a[i][j];
					b[i - 1][j + 1] += a[i][j];
					b[i][j - 1] += a[i][j];
					b[i][j + 1] += a[i][j];
					b[i + 1][j - 1] += a[i][j];
					b[i + 1][j] += a[i][j];
					b[i + 1][j + 1] += a[i][j];
				}
			}
		}
		for(i = 0; i < 9; i++)
		{
			for(j = 0; j < 9; j++)
			{
				a[i][j] = 2 * a[i][j] +  b[i][j];
			}
		}
	}
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			if(j == 0)
			{
				cout << a[i][j];
			}
			else if(j == 8)
			{
				cout << " " << a[i][j] << endl;
			}
			else if(j > 0 && j < 8)
			{
				cout << " " << a[i][j];
			}
		}
	}
	return 0;
}