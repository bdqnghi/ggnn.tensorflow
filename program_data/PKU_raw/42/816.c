int main()
{
	int a[100000], n, i, k, j;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	for (i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			n -= 1;
			for (j = i; j < n; j++)
			{
				a[j] = a[j+1];
			}
			i -= 1;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			cout << " ";
		cout << a[i];
	}
	return 0;
}
