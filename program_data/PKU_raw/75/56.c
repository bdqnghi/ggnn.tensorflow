int main()
{
	int a[1000] = {0}, b[1000] = {0};
	int i = 0, m, k, num, max = 0;
	while(1)
	{
		cin >> a[i];
		i++;
		if(cin.get() == '\n')
			break;
	}
	m = i;
	i = 0;
	while(1)
	{
		cin >> b[i];
		i++;
		if(cin.get() == '\n')
			break;
	}
	for (k = 0; k < 1000; k++)
	{
		num = 0;
		for (i = 0; i < m ; i++)
		{
			if(k >= a[i] && k < b[i])
				num++;
		}
		if (num > max)
			max = num;
	}
	
	cout << m << " " << max;

	return 0;
}