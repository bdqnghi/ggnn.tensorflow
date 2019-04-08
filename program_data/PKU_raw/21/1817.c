int main()
{
	int i, n, a[300], sum = 0, t = 0;
	double ave, b[300], max;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	ave = (double)sum / n;
	for(i = 0; i < n; i++)
		b[i] = fabs(ave - a[i]);
	max = b[0];
	for(i = 1; i < n; i++)
		if(max < b[i])
			max = b[i];
	for(i = 0; i < n; i++)
		if(fabs(b[i] - max) < 0.000001)
		{
			t++;
			if(t == 1)
				cout << a[i];
			else
				cout << "," << a[i];
		}
	return 0;
}