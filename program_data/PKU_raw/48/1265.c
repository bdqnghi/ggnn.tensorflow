int a[9][9] = {0}, b[9][9] = {0};
int f(int x,int y)
{
	int v = a[x][y] * 2;
	if (x > 0)
	{
		v += a[x - 1][y];
		if (y > 0)
			v += a[x - 1][y - 1];
	}
	if (y > 0)
	{
		v += a[x][y - 1];
		if (x < 8)
			v += a[x + 1][y - 1];
	}
	if (x < 8)
	{
		v += a[x + 1][y];
		if (y < 8)
			v += a[x + 1][y + 1];
	}
	if (y < 8)
	{
		v += a[x][y + 1];
		if (x > 0)
			v += a[x - 1][y + 1];
	}
	return v;
}

int main()
{
	int m, n, i, j, k;
	cin >> m >> n;
	a[4][4] = m;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 8; k++)
				b[j][k] = f(j,k);
		}
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 8; k++)
				a[j][k] = b[j][k];
		}
	}
	for (j = 0; j <= 8; j++)
	{
		for (k = 0; k < 8; k++)
			cout << a[j][k] << " ";
		cout << a[j][8] << endl;
	}
	return 0;
}
