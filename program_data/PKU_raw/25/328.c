int main()
{
	int a[50] = {0}, i, j, k = 0, n, p = 48;
	cin >> n;
	a[49] = 1;
	for (i = 1; i <= n; i++)
	{
		for (j = 49; j >= p; j--)
		{
			a[j] = a[j] * 2 + k;
			if (a[j] >= 10)
			{
				k = 1;
				a[j] = a[j] - 10;
			}
			else k = 0;
		}
		if (a[p] > 0) p--;
	}
	while (a[p] == 0) p++;
	for (i = p; i <= 49; i++)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
}