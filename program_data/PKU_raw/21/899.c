int main()
{
	const int N = 300;
	int a[N];
	int i, n, j;
	double sum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	double ave;
	ave = sum / n;
	double b[N], temp1;
	int temp2;
	for (i = 0; i < n; i++)
		b[i] = fabs(a[i] - ave);
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (b[j] < b[j + 1] || fabs (b[j] - b[j + 1]) < 0.000001)
			{
				temp1 = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp1;
				temp2 = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp2;	
			}
	int c[N];
	c[0] = a[0];
	for (i = 1; i < n; i++)
	{
		if (fabs(b[i] - b[0]) < 0.000001)
			c[i] = a[i];
		else
			break;
	}
	for (j  = 0; j < i; j++)
		for (int k = 0; k < i - 1; k++)
			if (c[k] > c[k + 1])
			{
				temp2 = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp2;
			}
	cout << c[0];
	for (j = 1; j < i; j++)
		cout << "," << c[j];
	cout << endl;
	return 0;
}

