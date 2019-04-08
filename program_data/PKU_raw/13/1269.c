int main()
{
	int n, i, t, a[20000], b[100], c[20000];
	cin >> n;
	for (i = 0; i < 100; i++)
		b[i] = 1;
	for (i = 0; i < n; i++)
		cin >> a[i];
	t = 0;
	for (i = 0; i < n; i++)
		if (b[a[i]] == 1)
		{
			c[t] = a[i];
			t++;
			b[a[i]] = 0;
		}
	for (i = 0; i < t - 1; i++)
		cout << c[i] << " ";
	cout << c [t - 1] << endl;
	return 0;
}