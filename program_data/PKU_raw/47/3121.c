int main()
{
	int i, n, m, a[100], b[100];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		b[i] = i;
		cin >> a[b[i]];
	}
	for (i = 1; i <= n / 2; i++)
	{
		m = b[i];
		b[i] = b[n + 1 - i];
		b[n + 1 - i] = m;
	}
	for (int j = 1; j <= n; j++)
	{
		if (j == n)
			cout << a[b[j]] << endl;
		else
			cout << a[b[j]] << " ";
	}
	return 0;
}