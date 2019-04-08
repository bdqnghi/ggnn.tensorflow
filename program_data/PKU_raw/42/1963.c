int main()
{
	int i, n, k, a[100002], g = 0, t;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	for(i = 0; i < n; i++)
	{
		while(a[i] == k)
		{
			for(t = i; t <= n; t++)
			{
				a[t] = a[t + 1];
			}
			g++;
		}
	}
	for(i = 0; i < (n - g); i++)
	{
		if(i != (n - g - 1))
		{cout << a[i] << " ";}
		else
		{cout << a[i];}
	}
	return 0;
}
