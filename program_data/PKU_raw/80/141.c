int leapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	return 0;
}
int main()
{
	int month[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int i,startYear,endYear,startMonth,endMonth,startDay,endDay,count = 0;
	scanf("%d%d%d",&startYear,&startMonth,&startDay);
	scanf("%d%d%d",&endYear,&endMonth,&endDay);
	if(startYear < endYear)
	{
		for(i = startMonth + 1; i <= 12; i++)
		{
			count += month[leapYear(startYear)][i];
		}
		for(i = 1; i < endMonth; i++)
		{
			count += month[leapYear(endYear)][i];
		}
		count += month[leapYear(startYear)][startMonth] - startDay;
		count += endDay;
	}else{
		for(i = startMonth + 1; i < endMonth; i++)
		{
			count += month[leapYear(startYear)][i];
		}
		if(startMonth < endMonth)
		{
			count += month[leapYear(startYear)][startMonth] - startDay;
			count += endDay;
		}else{
			count += endDay - startDay;
		}
	}
	for(i = startYear + 1;i < endYear; i++)
	{
		count += 365 + leapYear(i);
	}
	printf("%d",count);
	return 0;
}
