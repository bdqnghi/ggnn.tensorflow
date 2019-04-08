int main()
{
	int x[1001], y[1001], z[1001] = {0}, n, i, j, k;
	char a;
	for(i = 1; i <= 1000; i++)
	{
		cin >> x[i];
		a = cin.get();
		if (a == ',');
		else
		{
			n = i;
			break;
		}
	}
	for (i = 1; i <= 1000; i++)
	{
		cin >> y[i];
		a = cin.get();
		if (a == ',');
		else
			break;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = x[i]; j <= y[i] - 1; j++)
			z[j]++;
	}
	for (i = 1, k = 0; i <= 1000; i++)
	{
		if (z[i] > k)
		{
			k = z[i];
		}
	}
	cout << n << " " << k;
	return 0;
}
