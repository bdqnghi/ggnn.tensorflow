int main()
{
	int k, n, a[20001], i, j, b[20001] = {0};
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	for (i = 1; i <= n; i++)
		for (j = i + 1; j <= n; j++)
			if (a[i] == a[j])
				b[j] = 1;
	for (k = n; k > 0; k--)
		if (b[k] == 0)
			break;			
	for (i = 1; i < k; i++)
		if (b[i] == 0)
			cout << a[i] << ' ';
	cout << a[k];
	
	return 0;
}
