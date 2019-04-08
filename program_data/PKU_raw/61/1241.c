int main()
{
	int f[20] = {1, 1}, k, a, i, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		for (k = 2; k < a; k++)
		{
			f[k] = f[k - 2] + f[k - 1];
		}
		cout << f[k-1] << endl;
	}
	return 0;
}