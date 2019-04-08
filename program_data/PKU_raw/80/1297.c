int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int leapdays[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int leapyearornot(int year)
{
	return year % 400==0||year%4==0&&year%100!=0;
}
int sumfromfirstday(int year,int month,int day)
{
	int i,sum=day;
	for(i=1;i<month;i++)
	{
		if(leapyearornot(year))
			sum+=leapdays[i];
		else
			sum+=days[i];
	}
	return sum;
}

int daysfromfirst(int startyear,int endyear,int endmonth,int endday)
{
	int i,sum=0;
	for(i=startyear;i<endyear;i++)
	{
		sum+=leapyearornot(i)?366:365;
	}
	sum+=sumfromfirstday(endyear,endmonth,endday);
	return sum;
}

int main()
{
	int startyear,startmonth,startday,endyear,endmonth,endday;
	scanf("%d %d %d %d %d %d",&startyear,&startmonth,&startday,&endyear,&endmonth,&endday);
	printf("%d",daysfromfirst(startyear,endyear,endmonth,endday)-daysfromfirst(startyear,startyear,startmonth,startday));
	return 0;
}
