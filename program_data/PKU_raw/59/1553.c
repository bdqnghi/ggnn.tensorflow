int main ()
{
	int i, j, n, day, k, cnt = 0, s = 0;
	char a[200][200], b[200][200];
	cin >> n;
	for (i = 1; i <= n; i ++)
	{
		for (j =1; j <= n; j++)
		{
			cin >> a[i][j];
			b[i][j] = a [i][j];
		}
	}
	cin >> day;
	for (k = 1; k < day; k ++)
	{
		for (i = 1; i <= n; i ++)
		{
			for (j = 1; j <= n; j ++)
			{
				if (a[ i ][ j ] == '@')
				{
					if (a [i - 1][j] != '#')
						b[i - 1][j] = '@';
					if (a [i][j + 1] != '#')
						b[i][j + 1] = '@';
					if (a [i][j - 1] != '#')
						b[i][j - 1] = '@';
					if (a [i + 1][j] != '#')
						b[i + 1][j] = '@';
				}
			}
		}
		for (i = 1; i <= n; i ++)
			{
				for (j = 1; j <= n; j ++)
				{
					a[i][j] = b[i][j];
				}
			}
	}
	for (i = 1; i <= n; i ++)
	{
		for (j = 1; j <= n; j ++)
		{
			if (a[i][j] == '@')
				cnt ++;
			
		}
	}
	cout << cnt;
	return 0;
}