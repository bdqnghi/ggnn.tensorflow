
int main()
{
	int year,month,day,daynum;
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0)
	{
		if(year%100==0 && year%400!=0)
		{
			int num[12]={31,50,90,120,151,181,212,243,273,304,334,365};
			if(month>=2) daynum=num[month-2]+day;
			else daynum=day;
			printf("%d",daynum);
		}
		else
		{
			int num[12]={31,60,91,121,152,182,213,244,274,305,335,366};
			if(month>=2) daynum=num[month-2]+day;
			else daynum=day;
			printf("%d",daynum);
		}
	}
	else
	{
		int num[12]={31,50,90,120,151,181,212,243,273,304,334,365};
			if(month>=2) daynum=num[month-2]+day;
			else daynum=day;
		printf("%d",daynum);
	}
	return 0;
}
