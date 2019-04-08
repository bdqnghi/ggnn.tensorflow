const int monthlength[12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

inline int isLeapYear(int yearAD)
{
	if (yearAD % 4 == 0 && (yearAD % 100 != 0 || yearAD % 400 == 0))
		return 1;
	return 0;
}

int main()
{
	int y1, y2, m1, m2, d1, d2, delta;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	delta = d2 - d1;
	if (m1 < m2)
	{
		for (; m1 < m2; m1++)
		{
			if (m1 == 2)
				delta += 28 + isLeapYear(y1) + isLeapYear(y2);
			else
				delta += monthlength[m1];
		}
	}
	else
	{
		for (; m1 > m2; m1--)
		{
			if (m1 == 2)
				delta -= 28 + isLeapYear(y1) + isLeapYear(y2);
			else
				delta -= monthlength[m1];
		}
	}
	for (; y1 < y2; y1++)
		if (isLeapYear(y1))
			delta += 366;
		else
			delta += 365;
	cout << delta;
	return 0;
}