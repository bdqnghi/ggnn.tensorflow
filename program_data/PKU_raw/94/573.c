int main()
{
	int i, n, j, k = 0, p, a[500] = {0}, b[500];
	for(i = 0 ; i < 500 ; i++)
	{
		b[i] = 10000000;
	}
	cin >> n;
	for(i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for(j = 0 ; j < n ; j++)
	{
		if(a[j] % 2 == 1)
		{
			b[k] = a[j];
			k++;
		}
	}
	for(i = 0 ; i < n - 1 ; i++)
		for(j = 0 ; j < n - i - 1 ; j++)
		{
			if(b[j] > b[j + 1])
			{
				p = b[j];
				b[j] = b[j + 1];
				b[j + 1] = p;
			}
		}
	for(i = 0 ; i < k - 1 ; i++)
	{
		cout << b[i] << ",";
	}
	cout << b[k - 1];
	return 0;
}