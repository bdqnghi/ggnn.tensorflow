int main()
{
	int y1, y2, m1, m2, d1, d2;
	int i, j, sum = 0;
	int month[13] = {0, 31,28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	if (y1 == y2 && m1 == m2)
	{
		cout << d2 - d1 << endl;
		return 1;
	}
	else if (y1 == y2)
	{
		if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
			month[2] = 29;
		else
			month[2] = 28;
		sum += month[m1] - d1;
		if (m2 == m1 + 1)
			sum += d2;
		else
		{
			for (i = m1 + 1; i < m2; i++)
				sum += month[i];
			sum += d2;
		}
		cout << sum << endl;
	}
	else
	{
		for (i = y1; i <= y2; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
				month[2] = 29;
			else
				month[2] = 28;
			if (i == y1)
			{
				for (j = m1; j <= 12; j++)
				{
					if (j == m1)
						sum += month[m1] - d1;
					else
						sum += month[j];
				}
			}
			else if (i == y2)
			{
				for (j = 1; j <= m2; j++)
				{
					if (j != m2)
						sum += month[j];
					else
						sum += d2;
				}
			}
			else
			{
				if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
					sum += 366;
				else
					sum += 365;
			}
		}
		cout << sum << endl;
	}
	return 0;
}