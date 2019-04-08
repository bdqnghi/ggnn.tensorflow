
int main()
{
	int x[1000], y[1000], a[1000] = {0};
	int i, j, n = 0;
	char ch1, ch2;
	for (i = 0; ; i++)
	{
		cin >> x[i];
		ch1 = cin.get();
		n++;
		if (ch1 == '\n')
			break;
	}
	for (i = 0; ; i++)
	{
		cin >> y[i];
		ch2 = cin.get();
		if (ch2 == '\n')
			break;
	}
	int min;
	min = x[0];
	for (i = 0; i < n; i++)
		if (x[i] < min)
			min = x[i];
		int max;
		max = y[0];
		for (i = 0; i < n; i++)
			if (y[i] > max)
				max = y[i];
			for (j = min; j <= max; j++)
				for (i = 0; i < n; i++)
					if (x[i] <= j && y[i] > j)
						a[j]++;
					int m;
					m = a[min];
					for (i = min; i < max; i++)
						if (a[i] > m)
							m = a[i];
						cout << n << " " << m << endl;

						return 0;
}

