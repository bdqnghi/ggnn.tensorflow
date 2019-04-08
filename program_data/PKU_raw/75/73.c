int main()
{
	int time[2][1000];
	int n, i, j, k;
	char c[2][1000];
	int max, min;
	int mostpeople, countpeople;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; ; j++)
		{
			cin >> time[i][j];
			c[i][j]=cin.get();
			if (c[i][j] != ',')
				break;
		}
	}
	n = j;
	cout << n + 1<< " ";
	min = time[0][0];
	for (j = 0; j <= n; j++)
	{
		if (min > time[0][j])
			min = time[0][j];
	}
	max = time[1][0];
	for (j = 0; j <= n; j++)
	{
		if (max < time[1][j])
			max = time[1][j];
	}
	mostpeople = 0;
	for (k = min; k <= max; k++)
	{
		countpeople = 0;
		for (j = 0; j <= n; j++)
		{
			if ((k >= time[0][j]) && (k < time[1][j]))
				countpeople += 1;
		}
		if (mostpeople < countpeople)
			mostpeople = countpeople;
	}
	cout << mostpeople;
	return 0;
}