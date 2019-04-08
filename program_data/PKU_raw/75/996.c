int main()
{
	int count[1000] = {0}, x[1000] = {0}, y[1000], num[1000], i = 1, j, k, most = 0;
	char ch[100000], t;
	cin >> ch;
	for (j = 0; ch[j] != '\0'; j++)
	{
		if (ch[j] == ',')
		{
			num[i] = j;
			i++;
		}
	}
	x[1] = ch[0] - 48;
	for (j = 1; j < num[1]; j++)
	{
		x[1] = 10 * x[1] + ch[j] - 48;
	}
	for (j = 2; j <= i; j++)
	{
		x[j] = ch[num[j - 1] + 1] - 48;
		if (j == i)
		{
			for (k = num[i - 1] + 2; ch[k] != '\0'; k++)
			{
				x[i] = 10 * x[i] + ch[k] - 48; 
			}
		}
		for (k = num[j - 1] + 2; k < num[j]; k++)
		{
			x[j] = 10 * x[j] + ch[k] - 48;
		}
	}
	cin >> y[1];
	for (j = x[1]; j < y[1]; j++)
	{
		count[j]++;
	}
	for (j = 2; j <= i; j++)
	{
		cin >> t >> y[j];
		for (k = x[j]; k < y[j]; k++)
		{
			count[k]++;
		}
	}
	for (j = 1; j < 1000; j++)
	{
		if (count[j] > most)
		{
			most = count[j];
		}
	}
	cout << i << " " << most << endl;
	return 0;
}