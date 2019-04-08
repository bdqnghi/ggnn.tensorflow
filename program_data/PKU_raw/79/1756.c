int main()
{
	int a[400];
	int n,m,i,j,count;
	cin >> n >> m;
	for (i = 0; i < 400; i++)
		a[i] = 1;
	count = 0;
	i = 0;
	j = 0;
	while (n != 0)
	{
		while (count < (n - 1))
		{
			i++;
			if (i == (n + 1))
			{
				i = 1;
			}
			if (a[i] != 0)
			{
				j++;
				if(j == m)
				{
					a[i] = 0;
					j = 0;
					count++;
				}
			}
		}
		for (i = 1; i <= n; i++)
		{
			if (a[i] != 0)
			{
				cout << i << endl;
				break;
			}
		}
		for (i = 0; i < 400; i++)
		    a[i] = 1;
		cin >> n >> m;
		count = 0;
		i = 0;
		j = 0;
	}
	return 0;
}