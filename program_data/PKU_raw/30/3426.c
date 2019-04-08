int main()
{
	int k, s = 0, n, i, a[100] = {0};
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 7 == 0) 
			a[i] = 1;
		else
		{
			k = i;
			while (k != 0) 
			{
				if (k % 10 == 7)
				{
					a[i] = 1;
					break;
				}
				k = k / 10;
			}
		}
	}
	for (i = 1; i <= n; i++)
		if (a[i] != 1) 
			s = s + i * i;
	cout << s;
	return 0;
}
