int main()
{
	char sex[7];
	int i, n, j = 0, k = 0, h;
	float male[40] = {0.0}, female[40] = {0.0}, height = 0.00;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> sex >> height;
		if (sex[0] == 'm')
			male[j++] = height;
		else
			female[k++] = height;
	}
	for (i = 0; i <= j - 1; i++)
	{
		for (h = i + 1; h <= j - 1; h++)
		{
			if (male[i] > male[h])
			{
				height = male[i];
				male[i] = male[h];
				male[h] = height;
			}
		}
	}
	for (i = 0; i <= j - 1; i++)
		cout << setprecision(2) << fixed << male[i] << " ";
	for (i = 0; i <= k - 1; i++)
	{
		for (h = i + 1; h <= k - 1; h++)
		{
			if (female[i] < female[h])
			{
				height = female[i];
				female[i] = female[h];
				female[h] = height;
			}
		}
	}
	for (i = 0; i <= k - 2; i++)
		cout << setprecision(2) << female[i] << " ";
	cout << setprecision(2)  << female[k - 1];
	return 0;
}

