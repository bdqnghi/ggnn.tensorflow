int main()
{
	int i, j, m, n, k,a[9][9], b[9][9];

	memset(a,0,9*9*sizeof(int));
	memset(b,0,9*9*sizeof(int));
	cin >> m >> n;
	a[4][4] = m;
	b[4][4] = m;
	for (k = 0;k <= n;k++)
	{
		for (i = 4 - k;i < 4 + k;i++)
		{
			for (j = 4 - k;j < 4 + k;j++)
			{
				b[i-1][j-1] += a[i][j];
				b[i-1][j]   += a[i][j];
				b[i-1][j+1] += a[i][j];
				b[i][j-1]   += a[i][j];
				b[i][j+1]   += a[i][j];
				b[i+1][j-1] += a[i][j];
				b[i+1][j]   += a[i][j];
				b[i+1][j+1] += a[i][j];
				b[i][j] += a[i][j];
			}
		}

		for (i = 0;i < 9;i++)
		{
			for (j = 0;j < 9;j++)
			{
				a[i][j] = b[i][j];
			}
		}
	}

	for (i = 0;i < 9;i++)     //????
	{
		for (j = 0;j < 9;j++)
		{
			if (i < 8)
			{
				if (j < 8)
					cout << a[i][j] << " ";
				else 
					cout << a[i][j] << endl;
			}
			else 
			{
				if (j < 8)
					cout << a[i][j] << " ";
				else 
					cout << a[i][j];
			}
		}
	}
	return 0;
}
