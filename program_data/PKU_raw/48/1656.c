int main()
{
	long int a[11][11] = {0}, b[11][11] = {0};
	int m, n, i, j, k, p, q;
	cin >> m >> n;
	a[5][5] = m;
	for (k = 1; k <= n; k++)
	{
		for (i = 0; i <= 10; i++)
			for (j = 0; j <= 10; j++)
				b[i][j] = a[i][j];
		for (i = 5 - k; i <= 5 + k; i++)
			for (j = 5 - k; j <= 5 + k; j++)
				for(p = i - 1; p <= i + 1; p++)
					for(q = j - 1; q <= j + 1; q++)
						a[i][j] = a[i][j] + b[p][q];
	}
	for (i = 1; i <= 9; i++)
		for(j = 1; j <= 9; j++)
		{
			if (j == 9)
				cout << a[i][j] << endl;
			else
				cout << a[i][j] << " ";
		}
	return 0;
}
