int main()
{
	int i, j, k = 1, l, m, n, a[20000], b[90], x;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	b[0] = a[0];
	for (j = 0; j < n; j++)
	{
		for (l = 0; l < k; l++)
		{
			if (a[j] == b[l])
			{m = 1;}
		}
		if (m != 1)
		{
			b[k] = a[j];
			k++;
		}
		m = 0;
	}
	cout << b[0];
	for (x = 1; x < k; x++)
		cout << " " << b[x];
	return 0;
}