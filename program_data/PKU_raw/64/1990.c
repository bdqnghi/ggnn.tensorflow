int main()
{
	int n, i, j, k, l, m, a, b;
	int x[12] = {0};
	int y[12] = {0};
	int z[12] = {0};
	double d[12][12] = {0};
	double max;
	int pm[12][12] = {0};
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			d[i][j] = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
		}
	}
	max = -1.0;
	k = n * (n - 1) / 2;
	for (l = 1; l <= k; l++)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i + 1; j <= n; j++)
			{
				if (d[i][j] - max > 1e-10)
				{
					max = d[i][j];
					a = i;
					b = j;
				}
			}
		}
		cout << "(" << x[a] << "," << y[a] << "," << z[a] << ")" << "-" << "(" << x[b] << "," << y[b] << "," << z[b] << ")" << "=" << fixed << setprecision(2) << d[a][b] << endl;
		d[a][b] = 0;
		max = - 1;
	}
	return 0;
}