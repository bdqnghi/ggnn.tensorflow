int main()
{
	int startYear,startMonth,startDay,endYear,endMonth,endDay;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int i,dertYear=0,dertMonth=0,dertDay=0,sum=0;
	scanf("%d%d%d%d%d%d",&startYear,&startMonth,&startDay,&endYear,&endMonth,&endDay);
	if(startDay<endDay)
	{
		for(i=startDay;i<endDay;i++)
			dertDay=dertDay+1;
	}
	else if(startDay>endDay)
	{
		for(i=startDay;i>endDay;i--)
			dertDay=dertDay-1;
	}
	if(startMonth<endMonth)
	{
		if(endYear%4==0&&endYear%100!=0||endYear%400==0)
		{
			for(i=startMonth;i<endMonth;i++)
				dertMonth=dertMonth+b[i];
		}
		else
		{
			for(i=startMonth;i<endMonth;i++)
				dertMonth=dertMonth+a[i];
		}
	}
	else if(startMonth>endMonth)
	{
		if(endYear%4==0&&endYear%100!=0||endYear%400==0)
		{
			for(i=startMonth;i>endMonth;i--)
				dertMonth=dertMonth-b[i];
		}
		else
		{
			for(i=startMonth;i>endMonth;i--)
				dertMonth=dertMonth-a[i];
		}
	}
	if(startYear<endYear)
	{
		for(i=startYear;i<endYear;i++)
		{
			if((i%4==0&&i%100!=0||i%400==0))
				dertYear=dertYear+366;
			else
				dertYear=dertYear+365;
		}
	}
	sum=dertDay+dertMonth+dertYear;
	printf("%d\n",sum);
	return 0;
}







