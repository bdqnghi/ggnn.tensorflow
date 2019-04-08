int main()
{
	int startyear, startmonth, startday;
	int endyear, endmonth, endday;
	int month[13] = {0, 31, 0,31, 30, 31, 30 ,31 ,31, 30 , 31, 30, 31}, year[2] = {365, 366}, i,  feb, num = 0;
	cin >> startyear >> startmonth >> startday;
	cin >> endyear>> endmonth >> endday;
	if(startyear == endyear)
	{
		feb = (endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0);
		month[2] = 28 + feb;
		if(startmonth == endmonth)
		{
			for(i = startday; i < endday; i++)
				num ++;
		}
		else
		{
			num += month[startmonth] - startday;
			for(i = startmonth + 1 ; i < endmonth; i++)
			{
				num += month[i];
			}
			num += endday;
		}
	}
	else
	{
		feb = (startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0);
		month[2] = 28 + feb;
		num += month[startmonth] - startday;
		for(i = startmonth + 1; i <= 12; i++)
			num += month[i];
	for(i = startyear + 1; i < endyear; i++)
	{
		feb = (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0);
		month[2] = 28 + feb;
		num += year[feb];
	}
	feb = (endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0);
	month[2] = 28 + feb;

	for(i = 1; i < endmonth ; i++)
		num += month[i];
	num += endday;
	}
	cout << num << endl;
	return 0;
}