int main()
{
	int startyear,startmonth,startday,rankstartday=0;
	int endyear,endmonth,endday,rankendday=0;
	cin >> startyear >> startmonth >> startday;
	cin >> endyear >> endmonth >> endday;
	int sum=0,year=0,month;
	int days1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int days2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if( startyear== endyear)
	{
		if( (startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0) )
		{
			for(month=1;month<startmonth;month++)
			{
				rankstartday=rankstartday+days2[month-1];
			}
			rankstartday=rankstartday+startday;
			for(month=1;month<endmonth;month++)
			{
				rankendday=rankendday+days2[month-1];
			}
			rankendday=rankendday+endday;
		}
		if( !((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0)) )
		{
			for(month=1;month<startmonth;month++)
			{
				rankstartday=rankstartday+days1[month-1];
			}
			rankstartday=rankstartday+startday;
			for(month=1;month<endmonth;month++)
			{
				rankendday=rankendday+days1[month-1];
			}
			rankendday=rankendday+endday;
		}
		sum = rankendday - rankstartday;
	}
	if ( startyear < endyear)
	{
		if( (startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0) )
		{
			for(month=1;month<startmonth;month++)
			{
				rankstartday=rankstartday+days2[month-1];
			}
			rankstartday=rankstartday+startday;
			sum=366-rankstartday;
		}
		if( !((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0)) )
		{
			for(month=1;month<startmonth;month++)
			{
				rankstartday=rankstartday+days1[month-1];
			}
			rankstartday=rankstartday+startday;
			sum=365-rankstartday;
		}
		for(year=startyear+1;year<endyear;year++)
		{
			if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) )
			{
				sum=sum+366;
			}
			else sum=sum+365;
		}
		if( (endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0) )
		{
			for(month=1;month<endmonth;month++)
			{
				rankendday=rankendday+days2[month-1];
			}
			rankendday=rankendday+endday;
			sum=sum+rankendday;
		}
		if( !((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0)) )
		{
			for(month=1;month<endmonth;month++)
			{
				rankendday=rankendday+days1[month-1];
			}
			rankendday=rankendday+endday;
			sum=sum+rankendday;
		}
	}
	cout << sum << endl;
	return 0;
}
