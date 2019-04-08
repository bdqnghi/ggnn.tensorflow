int main()
{
	int monthday_ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int monthday_run[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	struct cal
	{
		int year;
		int month;
		int day;
	}date[2];
	
	int yy,mm,dd,sum=0,i;
	cin>>date[0].year>>date[0].month>>date[0].day;
	cin>>date[1].year>>date[1].month>>date[1].day;
	if(date[1].year-date[0].year>0)
	{
	if(date[1].year-date[0].year>1)
	{
		sum=365*(date[1].year-date[0].year-1);
	}
	for(i=date[0].month;i<=12;i++)
	{
		sum=sum+monthday_ping[i];
	}
	sum=sum-date[0].day;
	for(i=1;i<date[1].month;i++)
	{
		sum=sum+monthday_ping[i];
	}
	sum=sum+date[1].day;
	}
	else
	{
		if(date[0].month<date[1].month)
		{
		for(i=date[0].month;i<date[1].month;i++)
		{
			sum=sum+monthday_ping[i];
		}
		sum=sum-date[0].day+date[1].day;
		}
		else sum=date[1].day-date[0].day;
	}

	
	for(i=date[0].year+1;i<date[1].year;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			sum++;
		}
	}
	if((date[0].year%4==0&&date[0].year%100!=0)||(date[0].year%400==0))
	{
		if((date[0].month<2)||(date[0].month=2&&date[0].day!=29))
		{
			sum++;
		}
	}
	if((date[1].year%4==0&&date[1].year%100!=0)||(date[1].year%400==0))
	{
		if((date[1].month=2)||(date[1].month=2&&date[1].day!=29))
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}

