int main()
{
	int a[4], g = 0, i, max = 0, temp, max1 = 0, max2 = 0, max3 = 0;												//a[0] == z    a[1] == q       a[2] == s       a[3] == l
	char b[4] = {'z', 'q', 's', 'l'};
	for (a[0] = 10; a[0] <= 50; a[0] += 10)
	{
		for (a[1] = 10; a[1] <= 50; a[1] += 10)
		{
			for (a[2] = 10; a[2] <= 50; a[2] += 10)
			{
				for (a[3] = 10; a[3] <= 50; a[3] += 10)
				{
					if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] !=a[2] && a[1] != a[3] && a[2] != a[3]
						&& (a[0] + a[1] == a[2] + a[3]) && (a[0] + a[3] > a[1] + a[2]) && (a[0] + a[2] < a[1]))
					{
						g = 1;
						break;
					}
				}
				if (g == 1)
					break;
			}
			if (g == 1)
				break;
		}
		if (g == 1)
			break;
	}
	for (i = 0; i < 4; i ++)
	{
		if (a[i] > max)
		{
			max = a[i];
			temp = i;
		}
	}
	cout << b[temp] << " " << max << endl;
	for (i = 0; i < 4; i ++)
	{
		if (a[i] == max)
		{
			continue;
		}
		if (a[i] > max1)
		{
			max1 = a[i];
			temp = i;
		}
	}
	cout << b[temp] << " " << max1 << endl;
	for (i = 0; i < 4; i ++)
	{
		if (a[i] == max || a[i] == max1)
		{
			continue;
		}
		if (a[i] > max2)
		{
			max2 = a[i];
			temp = i;
		}
	}
	cout << b[temp] << " " << max2 << endl;
	for (i = 0; i < 4; i ++)
	{
		if (a[i] == max || a[i] == max1 || a[i] == max2)
		{
			continue;
		}
		if (a[i] > max3)
		{
			max3 = a[i];
			temp = i;
		}
	}
	cout << b[temp] << " " << max3 << endl;
	return 0;			
}