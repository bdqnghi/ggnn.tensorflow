int main()
{
	int sy, sm, sd;
	int ey, em, ed;
	int i ,day = 0, d1 = 0, d2 = 0;
	cin >> sy >> sm >> sd >> ey >> em >> ed;
	for(i = sy; i < ey; i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			day += 366;
		else
			day += 365;
	}
	for(i = 1; i < sm; i++)
	{
		if(i == 2)
		{
			if((sy % 4 == 0 && sy % 100 != 0) || (sy % 400 == 0))
				d1 += 29;
			else
				d1 += 28;
		}
		else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			d1 += 31;
		else
			d1 += 30;
	}
	d1 += sd;
	for(i = 1; i < em; i++)
	{
		if(i == 2)
		{
			if((ey % 4 == 0 && ey % 100 != 0) || (ey % 400 == 0))
				d2 += 29;
			else
				d2 += 28;
		}
		else if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			d2 += 31;
		else
			d2 += 30;
	}
	d2 += ed;
	day = day - d1 + d2;
	cout << day << endl;




	return 0;
}
