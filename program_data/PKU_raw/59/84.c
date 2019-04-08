int main()
{
	int n, m, p = 0, x, y;
	char dorm[102][102];
	cin >> n;
	for (x = 1; x <= n; x++) for (y = 1; y <= n; y++) cin >> dorm[x][y];
	cin >> m;
	for (x = 0; x <= n + 1; x++)
	{
		dorm[x][n+1] = '#';
		dorm[x][0] = '#';
		dorm[0][x] = '#';
		dorm[n+1][x] = '#';
	}
	do
	{
		for (x = 1; x <= n; x++) for (y = 1; y <= n; y++) if (dorm[x][y] == '@')
		{
			if (dorm[x-1][y] == '.') dorm[x-1][y] = '!';
			if (dorm[x+1][y] == '.') dorm[x+1][y] = '!';
			if (dorm[x][y-1] == '.') dorm[x][y-1] = '!';
			if (dorm[x][y+1] == '.') dorm[x][y+1] = '!';
		}
		for (x = 1; x <= n; x++) for (y = 1; y <= n; y++) if (dorm[x][y] == '!') dorm[x][y] = '@';
		m--;
	} while (m > 1);
	for (x = 1; x <= n; x++) for (y = 1; y <= n; y++) if (dorm[x][y] == '@') p++;
	cout << p << endl;
	return 0;
}