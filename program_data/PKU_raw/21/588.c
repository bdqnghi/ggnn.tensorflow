int main()
{
	int n, i, a[300], s = 0, c = 0;
	double b[300], ave, max = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		s = s + a[i];
	}
	ave = (double)s / n;
	for (i = 0; i < n; i++)
	{
		b[i] = fabs(a[i] - ave);
		if (b[i] - max > 1e-6)
		{
			max = b[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		if(fabs(b[i] - max) < 1e-6)
			if(c == 0)
			{
				cout << a[i];
				c++;
			}
			else
			{
				cout << ',' << a[i];
				c++;
			}
	}
	return 0;
}