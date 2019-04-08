int main()
{
	int n, a[20000], i, j, k;
	cin >> n;
	for (i = 0; i < n ; i++)
		cin >> a[i];
	for (i = n - 1; i > 0; i--)
	{
        for (j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				for (k = i ; k < n; k++)
				{
					a[k] = a[k + 1];
				}
				n = n - 1;
			}
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		cout << a[i];
		if (i != n - 1)                        
			cout << " ";
	}
    return 0;
}