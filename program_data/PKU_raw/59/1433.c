

int main()
{
	int n, m[102][102] = {0}, d, ans = 0, i, j, k;
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			char x;
			cin >> x;
			if (x == '.')
				m[i][j] = 0;
			if (x == '@')
				m[i][j] = 1;
			if (x == '#')
				m[i][j] = -1;
		}
	cin >> d;
	for (k = 1; k < d; k++)
	{
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (m[i][j] == 1)
				{
					if (m[i-1][j] == 0) m[i-1][j] = 2;
					if (m[i+1][j] == 0) m[i+1][j] = 2;
					if (m[i][j-1] == 0) m[i][j-1] = 2;
					if (m[i][j+1] == 0) m[i][j+1] = 2;
				}
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (m[i][j] == 2)
					m[i][j] = 1;
	}
	for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (m[i][j] == 1) ans++;
	cout << ans;
	return 0;
}