int main()
{
	int count, i = 0, j, a[1000][2], max = 0;
	char ch;
	double temp;
	while(1)
	{
		cin >> a[i][0];
		i++;
		if ((ch = cin.get()) == '\n')
			break;
	}
	i = 0;
	while(1)
	{
		cin >> a[i][1];
		i++;
		if ((ch = cin.get()) == '\n')
			break;
	}
	for (temp = 0.5; temp < 1000; temp++)
	{
		count = 0;
		for (j = 0; j < i; j++)
			if (temp > a[j][0] && temp < a[j][1])
				count++;
		if (count > max)
			max = count;
	}
	cout << i << ' ' << max;
	return 0;
}