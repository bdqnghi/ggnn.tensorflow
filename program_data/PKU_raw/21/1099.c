


int main()
{
	double a[302], b[302] = {0};
	double num = 0, average = 0, k;
	int n, p = 0, i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		num = num + a[i];
	}
	average = num / n;
	k = fabs(a[0] - average);
	for (i = 0; i < n; i++)
	{
		if (fabs(a[i] - average) > k)
		{
			p = 1;
			k = fabs(a[i] - average);
			b[p] = a[i];
		}
		else
			if (fabs(a[i] - average) == k)
			{
				p++;
				b[p] = a[i];
			}
	}
	for (i = 1; i <= p; i++)
	{
		for (j = 1; j <= p - i; j++)
		{
			if (b[j] > b[j + 1])
			{
				k = b[j];
				b[j] = b[j + 1];
				b[j+ 1] = b[j];
			}
		}
	}
	for (i = 1; i <= p; i++)
	{
		if (i == 1)
			cout << b[i];
		else
			cout << "," << b[i];
	}
	cout << endl;
	return 0;
}





