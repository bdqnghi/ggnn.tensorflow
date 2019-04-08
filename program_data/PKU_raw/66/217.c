int f(int m)
{
	if(m%4!=0||(m%100==0&&m%400!=0))
		return 0;
	else
		return 1;
}
char week[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int Year,Month,Day,Week;
	int i;
	scanf("%d%d%d",&Year,&Month,&Day);
	int sum=(((Year-1)/4-(Year-1)/100+(Year-1)/400)%7)*366+((Year-1-(((Year-1)/4-(Year-1)/100+(Year-1)/400)%7))%7)*365;
	for(i=0;i<Month-1;i++)
	{
		sum=sum+month[0][i];
	}
	for(i=1;i<Day;i++)
	{
		sum=sum+1;
	}
	if(Month>2)
	{
		if(f(Year))
			sum=sum+1;
	}
	Week=sum%7;
	printf("%s",week[Week]);
	printf("\n");
	return 0;
}


