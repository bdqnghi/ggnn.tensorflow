int main()
{
	char a;
	int x[1000], y[1000], hour[1000] = {0}, peo = 0, temp;

	for (int i = 0; i < 1000; i++)
	{
		cin >> x[i];
		cin.get(a);
	    peo++;
		if (a == '\n') break;
	}
	for (int j = 0; j <= peo; j++)
	{
		cin >> y[j];
		cin.get(a);
		if (a == '\n') break;
	}
	for (int k = 0; k < peo; k++)
	{
		for (int p = x[k]; p < y[k]; p++)
		{
			hour[p]++;
		}
	}
	for (int m = 0; m < 1000; m++)
	{

		if (hour[m] > hour[m + 1])
		{
			temp = hour[m + 1];
			hour[m + 1] = hour[m];
			hour[m] = temp;
		}
	}

	cout << peo << ' ' << hour[999];

	return 0;
}
