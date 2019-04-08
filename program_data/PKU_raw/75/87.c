
int main()
{
	int a[1000], b[1000];
	int i = 1, j = 1, k, t, count, max = 0;
	cin >> a[0];
	while (cin.get() == ',')
	{
		cin >> a[i];
		i++;
	}
	cin >> b[0];
	while (cin.get() == ',')
	{
		cin >> b[j];
		j++;
	}
	cout << j << " ";
	for (t = 0; t < 1000; t++)
	{
		count = 0;
		for (k = 0; k < j; k++)
		{
			if (a[k] <= t && t < b[k])
			{count++;}
		}
		if (count > max)
		{
			max = count;
		}
	}
	cout << max;
	return 0;
}