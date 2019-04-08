int main()
{
	int n, a, b, c, i, m;
	cin >> n;
	for (; n > 0; n--)
	{
		cin >> m;
		a = 1, b = 1;
		if (m <= 2)
		{
			cout << 1;
			continue;
		}
		for (i = 3; i <= m; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		cout << c << endl;
	}
	return 0;
}
