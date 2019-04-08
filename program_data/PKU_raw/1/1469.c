
int fac(int p, int q)
{
	int i, t = 1;
	if (p > q)
	{
		return 0;
	}
	if (p == q)
	{
		return 1;
	}
	for (i = p; i <= sqrt(q); i++)
	{
		if (q % i == 0)
		{
			t += fac(i, q / i);			
		}
	}
	return t;
}
int main()
{
	int a, i, n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		cout << fac(2, a) << endl;
	}
	return 0;
}