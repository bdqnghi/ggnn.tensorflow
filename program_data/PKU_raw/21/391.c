int main()
{
	int n, a[300], flag = 0, i;
	double ave, sum = 0, max = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	ave = sum / n;
	for (i = 0; i < n; i++)
		if (fabs(a[i] - ave) - max > 1e-5)
			max = fabs(a[i] - ave);
	for (i = 0; i < n; i++)
		if (fabs(fabs(a[i] - ave) - max) < 1e-5 && flag == 0)
		{
			cout << a[i];
			flag = 1;
		}
		else if (fabs(fabs(a[i] - ave) - max) < 1e-5 && flag == 1)
			cout << ',' << a[i];
	return 0;
}
