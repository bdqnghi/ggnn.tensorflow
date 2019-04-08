int main()
{
	int startYear,startMonth,startDay, endYear,endMonth,endDay;
	int i,day=0;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>startYear>>startMonth>>startDay>>endYear>>endMonth>>endDay;
	for(i=startYear+1;i<endYear;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			day=day+366;
		else day=day+365;
	}
	if(startYear<endYear)
	{
		for(i=startMonth+1;i<=12;i++)
		day=day+m[i];
	for(i=1;i<endMonth;i++)
		day=day+m[i];
	day=day+m[startMonth]-startDay;
	day=day+endDay;
	if((startYear%4==0&&startYear%100!=0||startYear%400==0)&&startMonth<3)
		day=day+1;
	if((endYear%4==0&&endYear%100!=0||endYear%400==0)&&endMonth>=3)
		day=day+1;
	}
	else
	{
		if(startMonth<endMonth)
		{
			for(i=startMonth+1;i<endMonth;i++)
				day=day+m[i];
			day=m[startMonth]-startDay+endDay;
		}
		else day=endDay-startDay;
	}
	cout<<day;
	return 0;

}