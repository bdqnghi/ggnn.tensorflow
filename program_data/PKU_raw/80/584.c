

int main()
{
	int startyear,startmonth,startday,endyear,endmonth,endday,year,month;
	int a[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day;
	int i=0;
	scanf("%d%d%d",&startyear,&startmonth,&startday);
	scanf("%d%d%d",&endyear,&endmonth,&endday);
	day=0;
	for(year=startyear;year<endyear;++year)
	{
		day=day+365;
	}
	if(startmonth<endmonth)
	{
		for(month=startmonth;month<endmonth;++month)
		{
			day=day+a[month-1];
		}
	}
	else if(startmonth>endmonth)
	{
		for(month=startmonth;month>endmonth;--month)
		{
			day=day-a[month];
		}
	}
	day=day+endday-startday;
	for(year=startyear;year<=endyear;++year)
	{
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ++i;
	}
	if(((startyear % 4 == 0 && startyear % 100 != 0) || (startyear % 400 == 0))&&(startmonth>2))
		i=i-1;
	if(((endyear % 4 == 0 && endyear % 100 != 0) || (endyear % 400 == 0))&&(endmonth<2))
		i=i-1;
	day=day+i;
	printf("%d\n",day);
	return 0;
}
