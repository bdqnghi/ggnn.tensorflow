int year1,year2,month1,month2,day1,day2;
int year[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
int month[25]={0,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int count_year();
	
	int count_month();
	
	int count_day();

	int judge(int a);

	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	printf("%d\n",(count_year()+count_month()+count_day()));

	return 0;
}
int judge(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		return 1;
	else 
		return 0;
}
int count_year()
{
	int i,ans=0;
	for (i=year1+1;i<year2;i++)
		ans+=365+judge(i);
	return ans;
}
int count_month()
{
	int i,ans=0;	
	if (year2>year1) 
		month2+=12;
	month[2]=year[judge(year1)][2];
	month[14]=year[judge(year2)][2];
	for (i=month1+1;i<month2;i++)
		ans+=month[i];
	return ans;
}
int count_day()
{
	if (month2>month1)
		return (year[judge(year1)][month1]-day1+day2);
	else 
		return (day2-day1);
}	
	