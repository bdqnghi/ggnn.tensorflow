struct distance
{
	int point1;
	int point2;
	double dis;
} a[200], t;
int main()
{
	int x[20] = {0}, y[20] = {0}, z[20] = {0}, n, i, j, k = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x[i] >> y[i] >> z[i];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = i + 1; j <= n; j++, k++)
		{
			a[k].dis = sqrt(pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0) + pow(z[i] - z[j], 2.0));
			a[k].point1 = i;
			a[k].point2 = j;
		}
	}
	for (k = 1; k <= n * (n - 1) / 2; k++)
	{
		for (i = 1; i <= n * (n - 1) / 2 + 1 - k; i++)
		{
			if (a[i].dis < a[i + 1].dis)
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	for (i = 1; i <= n * (n - 1) / 2; i++)
	{
		cout << "(" << x[a[i].point1] << "," << y[a[i].point1] << "," << z[a[i].point1] << ")-(" << x[a[i].point2] << "," << y[a[i].point2] << "," << z[a[i].point2] << ")=" << fixed << setprecision(2) << a[i].dis << endl;
	}
	return 0;
}