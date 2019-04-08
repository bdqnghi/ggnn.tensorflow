int main()
{
	int n, i, a[302], c[302], t = 0, temp, j;
	double b[302], sum = 0, maxnum = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	for (i = 1; i <= n; i++)
	{
		b[i] = fabs(sum / n - a[i]);
		if (maxnum < b[i])
			maxnum = b[i];
	}
	for (i = 1; i <= n; i++)
	{
		if(b[i] == maxnum)
		{
			c[t] = a[i];
			t++;
		}
	}
	cout << c[0];
	for (i = 0; i < t; i++)
	{
		for (j = 0; j < t - 1 - i; j++)
		{
			if (c[j] > c[j + 1])
			{
				temp = c[j + 1];
			    c[j + 1] = c[j];
			    c[j] = temp;
			}
		}
	}
	for (i = 1; i < t; i++)
		cout << "," << c[i];
	cout << endl;
	return 0;
}