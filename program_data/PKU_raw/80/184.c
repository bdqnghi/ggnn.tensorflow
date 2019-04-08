int RunNian(int year)
{
	if(((year%4==0)&&(year%100!=0))||(year%400==0))
		return 1;
	else
		return 0;
}
int Dijitian(int year,int month,int day)
{
	int total=0,i;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			total+=31;
		if(i==4||i==6||i==9||i==11)
			total+=30;
		if(i==2)
		{
			if(RunNian(year)) total+=29;
			else total+=28;
		}
	}
	total+=day;
	return total;
}
int main()
{
	int startYear,startMonth,startDay,endYear,endMonth,endDay;
	scanf("%d %d %d",&startYear,&startMonth,&startDay);
    scanf("%d %d %d",&endYear,&endMonth,&endDay);
	int num=0;
	if(startYear==endYear)
		num=Dijitian(endYear,endMonth,endDay)-Dijitian(startYear,startMonth,startDay);
	else
	{
		int i;
		for(i=startYear;i<endYear;i++)
		{
			if(RunNian(i))
				num+=366;
			else
				num+=365;
		}
		num+=Dijitian(endYear,endMonth,endDay)-Dijitian(startYear,startMonth,startDay);
	}
	printf("%d\n",num);
	return 0;
}