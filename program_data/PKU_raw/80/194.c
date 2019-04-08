int year1,month1,day1,year2,month2,day2;
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int i,j,temp;
	int dis1,dis2,sum;
	scanf("%d%d%d",&year1,&month1,&day1);
	scanf("%d%d%d",&year2,&month2,&day2);
	int cmpa;
    int ru(int year);
	if (cmpa==0) 
	{
		temp=year1; year1=year2; year2=temp;
		temp=month1; month1=month2; month2=temp;
		temp=day1; day1=day2; day2=temp;
	}
	dis1=0;
	for (i=1; i<month1; i++)
	{
		if ((i==2)&&(ru(year1)==1)) dis1++;
		dis1=dis1+month[i];
	}
	dis1=dis1+day1;
	dis2=0;
    for (i=1; i<month2; i++)
	{
		if ((i==2)&&(ru(year2)==1)) dis2++;
		dis2=dis2+month[i];
	}
	dis2=dis2+day2;
	sum=dis2-dis1;
	for (i=year1; i<year2; i++)
		if (ru(i)==1) 
			sum=sum+366;
		else
			sum=sum+365;
	printf("%d",sum);
	return 0;
}

int cmpa()
{
	if (year1<year2) return(1);
	if (year1>year2) return(0);
	if (month1<month2) return (1);
	if (month1>month2) return(0);
	if (day1<day2) return (1);
	return(0);
}
int ru(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return(1);
	else return(0);
}
