
int main()
{
	int d[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y1 = 0;
	int m1 = 0;
	int d1 = 0;
	int y2 = 0;
	int m2 = 0;
	int d2 = 0;
	int i = 0;
	int j = 0;
	int sum = 0;

	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	if (y1 != y2)
	{
		if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0) && (m1 <= 2))
			sum++;
		for (i = 12; i > m1; i--)
			sum += d[i];
		sum += d[m1] - d1;
		for (i = y1 + 1; i < y2; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
				sum++;
			sum += 365;
		}
		if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0) && (m2 > 2))
			sum += 1;
		for (i = 1; i < m2; i++)
			sum += d[i];
		sum += d2;
		cout << sum;
	}
	else
	{
		if ((m1 <= 2) && (m2 > 2))
			sum++;
		if (m2 > m1)
		{
			for (i = m1 + 1; i < m2; i++)
				sum += d[i];
			sum += d[m1] - d1;
			sum += d2;
		}
		else
			sum += d2 - d1;
		cout << sum;
	}

	return 0;
}