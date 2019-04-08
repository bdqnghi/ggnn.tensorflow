int main()
{
	int year1,year2,month1,month2,day1,day2,a,a1=0,a2;
	int date(int year,int a);
	scanf("%d%d%d",&year1,&month1,&day1);
	scanf("%d%d%d",&year2,&month2,&day2);
	for(;year1<year2||(year1==year2&&month1<month2);)
	{
		a1+=date(year1,month1);
		month1++;
		if(month1==13)
		{
			month1=1;
			year1++;
		}
	}
	a2=day2-day1;
	a=a1+a2;
	printf("%d\n",a);
	return 0;
}


int date(int year,int a)
{
	int b;
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
		b=31;
	else if(((year%4==0&&year%100!=0)||(year%400==0))&&a==2)
		b=29;
	else if(!((year%4==0&&year%100!=0)||(year%400==0))&&a==2)
		b=28;
	else if(a==4||a==6||a==9||a==11)
		b=30;
	return(b);
}
