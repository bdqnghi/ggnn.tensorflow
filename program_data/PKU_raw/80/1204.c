
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int countYear(int syear,int eyear);
	int countmonth(int year,int month,int day);
	int syear,smonth,sday,eyear,emonth,eday,day;
	scanf("%d%d%d%d%d%d",&syear,&smonth,&sday,&eyear,&emonth,&eday);
	int between,day1,day2;
	between=countYear(syear,eyear);
	day1=countmonth(syear,smonth,sday);
	day2=countmonth(eyear,emonth,eday);
	day=between-day1+day2;
	printf("%d",day);
	return 0;
}

countYear(int syear,int eyear)
{
	int day=0,i;
	for(i=syear;i<eyear;i++)
	{
		if((i%4==0&&i%100!=0)||i%400==0)
			day+=366;
		else
			day+=365;	
	}
	return day;
}

countmonth(int year,int month,int day)
{
	int n=0,i;
	if((year%4==0&&year%100!=0)||year%400==0)
		a[2]=29;
	for(i=1;i<month;i++)
		n+=a[i];
	n=n+day;
	return n;
}