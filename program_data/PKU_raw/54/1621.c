int k, n, i = 1;
long long pg(int);
int main()
{
	cin >> n >> k;
	int a;
	while (1)
	{
		a = pg(1);
		if (a)
		{
			cout << a << endl;
			return 0;
		}
		i++;
	}
}
long long pg(int m)
{
	if (m == n)
		return n * i + k;
	int p = pg(m + 1);
	if (p == 0 || p % (n - 1) != 0)
		return 0;
	else
	{
		return p * n / (n - 1) + k;
	}
}
