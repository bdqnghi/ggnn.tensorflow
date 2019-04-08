int main ()
{
	int a[301], i, j, num = 1, res[301], temp;
	double n, ave, c[301], sum = 0.0, max = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	ave = sum / n;
	for (i = 1; i <= n; i++)
	{
		c[i] = fabs (a[i] - ave);
		if (c[i] > max)
			max = c[i];
	}
	for (i = 1; i <= n; i++)
	{
		if (c[i] == max)
		{
			res[num] = a[i];
			num++;
		}
	}
	num--;
	for (j = 1; j <= num - 1; j++)
	{
		for (i = 1; i <= num - j; i++)
		{
			if (res[i] > res[i+1])
			{
				temp = res[i];
				res[i] = res[i+1];
				res[i+1] = temp;
			}
		}
	}
	for (i = 1; i < num; i++)
	{
		cout << res[i] << ',';
	}
	cout << res[num];
	return 0;
}