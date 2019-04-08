
int mon[2][13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
                  0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int f(int y, int m, int d)
{
	int i, day = 0;
	for (i = 1; i < y; i++)
	{
		if ((i % 400 == 0) || ((i % 100 != 0) && (i % 4 == 0)))
		{
			day = day + 366;
		}
		else
			day = day + 365;
	}
	int temp = ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)));
	for (i = 1; i < m; i++)
	{
		day = day + mon[temp][i];
	}
	day = day + d;
	return day;
}

int main()
{
	int y1, m1, d1, y2, m2, d2, day1, day2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	day1 = f(y1, m1, d1);
	day2 = f(y2, m2, d2);
	if (day1 >= day2)
		cout << day1 - day2 << endl;
	else
		cout << day2 - day1 << endl;
	return 0;
}