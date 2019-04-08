int main()
{
	int n, a[100000], k, m = 0, q = 0, i, j, r;
	cin >> n;
	for (r=0; r < n; r++)
		cin >> a[r];
	cin >> k;
	for (i = 0; i < n - m ; i++)
		if (a[i] == k)
		{
			for (j=i; j< n - m; j++)
				a[j] = a[j+1];
			m++;
			i--;
		}
	for (q = 0; q < n - m - 1; q++)
		cout << a[q] << " ";
	if (q == n - m - 1)
		cout << a[q];
	return 0;
}