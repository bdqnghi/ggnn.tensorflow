int leapyearmonth[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int commonyearmonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int dayofyear[2] = {365,366};
//????????
int IsLeapYear(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
int startYear,startMonth,startDay;
int endYear,endMonth,endDay;
scanf("%d%d%d",&startYear,&startMonth,&startDay);
scanf("%d%d%d",&endYear,&endMonth,&endDay);
int daybetweendates = 0;
int i,j,k;
	if(endYear == startYear)
	{
	int startdate = 0,enddate = 0;
	if(IsLeapYear(startYear)==1)
	{
		startdate += startDay;
		for(i = 0;i < startMonth - 1;i++)
			startdate += leapyearmonth[i];
		enddate += endDay;
		for(i = 0;i < endMonth - 1;i++)
			enddate += leapyearmonth[i];
	}
	if(IsLeapYear(startYear)==0)
	{
		startdate += startDay;
		for(i = 0;i < startMonth - 1;i++)
			startdate += commonyearmonth[i];
		enddate += endDay;
		for(i = 0;i < endMonth - 1;i++)
			enddate += commonyearmonth[i];
	}
	daybetweendates += enddate - startdate;
	}
	if(endYear - startYear > 0)
	{
	for(i = 1;i < endYear - startYear;i++)
	{
		daybetweendates += dayofyear[IsLeapYear(startYear + i)];
	}
	if(IsLeapYear(startYear)==1)
	{
	daybetweendates += leapyearmonth[startMonth - 1] - startDay;
	for(j = startMonth;j < 12;j++)
	{
		daybetweendates += leapyearmonth[j];
	}
	}
	if(IsLeapYear(startYear)==0)
	{
	daybetweendates += commonyearmonth[startMonth - 1] - startDay;
	for(k = startMonth;k < 12;k++)
	{
		daybetweendates += commonyearmonth[k];
	}
	}
	if(IsLeapYear(endYear)==1)
	{
	daybetweendates += endDay;
	for(j = 0;j < endMonth - 1;j++)
	{
		daybetweendates += leapyearmonth[j];
	}
	}
	if(IsLeapYear(endYear)==0)
	{
	daybetweendates += endDay;
	for(k = 0;k < endMonth - 1;k++)
	{
		daybetweendates += commonyearmonth[k];
	}
	}	
	}
	printf("%d\n",daybetweendates);
	return 0;
}