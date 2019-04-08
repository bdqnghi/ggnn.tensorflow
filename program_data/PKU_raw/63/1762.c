int main ()
{
	int a[105][105], b [105][105],c [105][105];
	int i, j, k, x1, y1, x2, y2;
	cin >> x1 >> y1;
	for (i = 1; i <= x1; i ++)
	{
		for (j = 1; j <= y1; j ++)
		{
			cin >> a[i][j];
		}
	}
	cin >> x2 >> y2;
	for (i = 1; i <= x2; i ++)
	{
		for (j = 1; j <= y2; j ++)
		{
			cin >> b[i][j];
		}
	}
	for (i = 1; i <= x1;i ++)
	{
		for (j = 1; j <= y2; j ++)
		{
			c[i][j] =  0;
			for (k = 1; k <= y1; k ++)
			{
				c[i][j] = c[i][j] + a[i][k] * b [k][j];
			}
		}
	}
	for (i = 1; i <= x1;i ++)
	{
		for (j = 1; j <= y2; j ++)
		{
			if (j != y2)
				cout << c[i][j] << " ";
			else
				cout << c[i][j] << endl;
		}
	}
	return 0;
}
