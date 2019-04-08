int main()
{
	int x[20] = {0}, y[20] = {0}, z[20] = {0}, n, flag1[200], flag2[200], i, j, k = 1, p;
	double distance[200], t;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = i + 1; j <= n; j++, k++)
		{
			distance[k] = sqrt(pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0) + pow(z[i] - z[j], 2.0));
			flag1[k] = i;
			flag2[k] = j;
		}
	}
	for (k = 1; k <= n * (n - 1) / 2; k++)
	{
		for (i = 1; i <= n * (n - 1) / 2 + 1 - k; i++)
		{
			if (distance[i] < distance[i + 1])
			{
				t = distance[i];
				distance[i] = distance[i + 1];
				distance[i + 1] = t;
				p = flag1[i];
				flag1[i] = flag1[i + 1];
				flag1[i + 1] = p;
				p = flag2[i];
				flag2[i] = flag2[i + 1];
				flag2[i + 1] = p;
			}
		}
	}
	for (i = 1; i <= n * (n - 1) / 2; i++)
	{
		cout << "(" << x[flag1[i]] << "," << y[flag1[i]] << "," << z[flag1[i]] << ")-(" << x[flag2[i]] << "," << y[flag2[i]] << "," << z[flag2[i]] << ")=" << fixed << setprecision(2) << distance[i] << endl;
	}
	return 0;
}