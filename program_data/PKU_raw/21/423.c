int main()
{
	int i, j, n;
	int sum[300], t1;
	double ave = 0.0, t, a[300];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> sum[i];
		ave = ave + sum[i];
	}
	ave = ave / n;
	for(i = 1; i <= n; i++)
	{
		a[i] = fabs(sum[i] - ave);
	}
	for(i = 1; i < n; i++)
	{
		for(j = 1; j <= n - i; j++)
		{
			if(a[j] - a[j + 1] < 0)
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				t1 = sum[j];
				sum[j] = sum[j + 1];
				sum[j+ 1] = t;
			}
		}
	}
	if(a[1] - a[2] < 0.000001)
	{
		if(sum[1] < sum[2])
			cout << sum[1] << "," << sum[2] << endl;
		else
			cout << sum[2] << "," << sum[1] << endl;
	}
	else
		cout << sum[1] << endl;
	return 0;
}