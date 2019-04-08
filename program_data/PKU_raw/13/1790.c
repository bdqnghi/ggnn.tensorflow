int main()
{
	int n;cin >> n;
	int m = 0;
	int a[20001];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 2; i <= n; i++)
		for (int j = i - 1; j >= 1; j--)
		{
			if (a[i] == a[j])
				a[i] = 0;
		}
	cout << a[1];
	for (int i = 2; i <= n; i++)
		if (a[i] != 0)
			cout << " " << a[i];
	return 0;
}