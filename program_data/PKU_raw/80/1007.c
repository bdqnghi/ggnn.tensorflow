int main()
{
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int startyear,endyear,startmonth,endmonth,startday,endday,days,days2,temp1,temp2,flag1,flag2;
	int year , month;
	cin >> startyear >> startmonth >> startday;
	cin >> endyear >> endmonth >> endday;
	if(startyear == endyear)
	{
		days = 0;
		if(startyear % 4 == 0 && startyear % 100 != 0 || startyear % 400 == 0)
			a[1] = 29;
		else
			a[1] = 28;
		for(month = startmonth ; month < endmonth ; month++)
			days = days + a[month - 1];
		days = days + endday - startday;
		cout << days << endl;
	}
	else if(startyear < endyear)
	{
		days = 0;
		days2= 0;
		for(year = startyear ; year < endyear ; year++)
		{
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
				days = days + 366;
			else
				days = days + 365;
		}
		flag1 = startmonth;
		flag2 = endmonth;
		if(startmonth > endmonth)
		{
			temp1 = startmonth;
			temp2 = startday;
			startmonth = endmonth;
			startday = endday;
			endmonth = temp1;
			endday = temp2;
		}
		if(endyear % 4 == 0 && endyear % 100 != 0 || endyear % 400 == 0)
			a[1] = 29;
		else
			a[1] = 28;
		for(month = startmonth ; month < endmonth ; month++)
			days2 = days2 + a[month - 1];
		days2 = days2 + endday - startday;
		if(flag1 > flag2)
			cout << days - days2 << endl;
		else
			cout << days + days2 << endl;
	}
	return 0;
}
