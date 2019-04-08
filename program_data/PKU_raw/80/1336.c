void main()
{
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int leap_days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int sum,sum1,sum2;
	int startyear,startmonth,startday,endyear,endmonth,endday;
	scanf("%d %d %d\n%d %d %d",&startyear,&startmonth,&startday,&endyear,&endmonth,&endday);
	int totalfromfirstday (int year1,int month1,int day1,int year2,int month2,int day2);
    sum1=totalfromfirstday(startyear,1,1,startyear,startmonth,startday);
	sum2=totalfromfirstday(startyear,1,1,endyear,endmonth,endday);
	sum=sum2-sum1;
	printf("%d",sum);
}
int totalfromfirstday (int year1,int month1,int day1,int year2,int month2,int day2)
{
	int i,j,sum;
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int leap_days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	sum=day2;
	for (i=1;i<month2;i++)
	{
		if(((year2)%4==0&&(year2)%100!=0)||((year2)%400==0))
			sum=sum+leap_days[i];
		else 
			sum=sum+days[i];
	}
	for (j=year1;j<year2;j++)
	{
		if ((j%4==0&&j%100!=0)||(j%400==0))
			sum=sum+366;
		else sum=sum+365;
	}
	return (sum);
}