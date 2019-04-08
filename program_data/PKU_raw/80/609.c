int main()
{				
	int startyear,startmonth,startday,endyear,endmonth,endday;
	int m[24]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int a,days,i,j;
	scanf("%d%d%d",&startyear,&startmonth,&startday);
	scanf("%d%d%d",&endyear,&endmonth,&endday);
	a=endyear-startyear;
	if(startmonth==endmonth)
		days=365*a;
	if(startmonth<endmonth)
	{
		days=365*a;
		for(i=startmonth;i<endmonth;i++)
		{
			days=days+m[i-1];
		}
	}
	if(startmonth>endmonth)
	{
		days=365*(a-1);
		for(i=startmonth;i<endmonth+12;i++)
		{
			days=days+m[i];
		}
	}
	days=days+endday-startday;
	for(j=startyear;j<=endyear;j++)
	{
		if((j%4==0&&j%100!=0)||(j%400==0))
			days=days+1;
	}
	if(((startyear%4==0&&startyear%100!=0)||(startyear%400==0))&&(startmonth>2))
		days=days-1;
	if(((endyear%4==0&&endyear%100!=0)||(endyear%400==0))&&(endmonth<2))
		days=days-1;
	printf("%d",days);
	return 0;
}

