int main()
{
	int n, i, a[200001], j, flag = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	cout << a[1];
	for (i = 2; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (a[j] == a[i])
			{
				flag = 1;
			}
		}
		if (!flag)
			cout << ' ' << a[i];
		flag = 0;
	}
	return 0;
}