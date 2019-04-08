int main()
{
	int i, j, m, n, a[20][20], k = 0;
	cin >> m >> n;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
				if(j + 1 < n)
				{
					if (a[i][j] >= a[i][j + 1]) 
						k++;
				}
				else
					k++;
				if(j - 1 >= 0)
				{
					if (a[i][j] >= a[i][j - 1]) 
						k++;
				}
				else
					k++;
				if (i + 1 < m)
				{
					if (a[i][j] >= a[i + 1][j])
						k++;
				}
				else
					k++;
				if (i - 1 >= 0)
				{
					if (a[i][j] >= a[i - 1][j])
						k++;
				}
				else
					k++;
				if (k == 4)
					cout << i << ' ' << j << endl;
				k = 0;
		}
	return 0;
}