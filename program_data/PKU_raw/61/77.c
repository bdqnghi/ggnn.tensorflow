int main()
{
	int n, i, a, j, f[21] = {0, 1, 1};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1 || a == 2)
		{
			cout << 1 << endl;
			continue;
		}
		for (j = 2; j < a; j++)
			f[j + 1] = f[j] + f[j - 1];
		cout << f[j] << endl;
	}
	return 0;
}