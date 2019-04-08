
int with(int m, int n, int k)
{
	if (m < n || m == 0 || n == 0)
	return 0;
	else if (m == n || n == 1)
	return 1;
	else
	{
		int sum = 0;
		for (int i = k; i <= m / n; i++)
		{
			sum = sum + with(m - i, n - 1, i);
		}
		return sum;
	}
}
int without(int m, int n)
{
	if (n == 1)
	return 0;
	else if (n == 2)
	return 1;
	else
	{
		int sum = 0;
		for (int i = 1; i <= n - 1; i++)
		{
			sum = sum + with(m, n - i, 1);
		}
		return sum;
	}
}
int main()
{
	int t, m, n, i;
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		cin >> m >> n;
		cout << with(m, n, 1) + without(m, n) << endl;
	}
	
	return 0;
}