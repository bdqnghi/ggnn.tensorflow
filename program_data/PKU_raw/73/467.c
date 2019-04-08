int main()
{
	int a[6][6], i, j, min, max, k, m, n, x, y, flag = 0;
	for (i = 1; i < 6; i++)
		for(j = 1; j < 6; j++)
			cin >> a[i][j];
	for (k = 1; k < 6; k++)
	{
		max = 0;
		for (m = 1; m < 6; m++)
		{
			if (max < a[k][m])
			{
				max = a[k][m];
				x = m;
			}
		}
		min = 100000;
		for (n = 1; n < 6; n++)
		{
			if (min >= a[n][x])
			{
				min = a[n][x];
				y = n;
			}
		}
		if (k == y)
		{
			flag = 1;
		    cout << y << ' ' << x << ' ' << a[y][x] << endl;
		}
	}
	if (flag == 0)
		cout << "not found";
	return 0;
}