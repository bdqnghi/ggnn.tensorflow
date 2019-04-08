int R(int year);
int main()
{
	int year1,month,day, total1,year,total2,tianshu,year2,month2,day2,i;
	scanf("%d%d%d",&year1,&month,&day);
	scanf("%d%d%d",&year2,&month2,&day2);
	total1=0; 
	total2=0;
	for( i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			total1+=31;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			total1+=30;
		}
		else if(i==2)
		{
			year=year1;
			if(R(year))
			{
				total1+=29;
			}
			else
			{
				total1+=28;
			}
		}
	}
	total1 +=day;
	for(year=1;year<year1;year++)
	{
		if(R(year))
		{
			total1+=366;
		}
		else
		{
			total1+=365;
		}
	}
	for(i=1;i<month2;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			total2+=31;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			total2+=30;
		}
		else if(i==2)
		{
			year=year2;
			if(R(year))
			{
				total2+=29;
			}
			else
			{
				total2+=28;
			}
		}
	}
	total2 +=day2;
	for(year=1;year<year2;year++)
	{
		if(R(year))
		{
			total2+=366;
		}
		else
		{
			total2+=365;
		}
	}
	tianshu=(total2-total1)>0?(total2-total1): (total1-total2);
	printf("%d",tianshu);
	return 0;
}
	int R( int year)
	{
		int result;
		if(year%400==0||(year%4)==0&&year%100!=0)
		{
			result=1;
		}
		else
		{
			result=0;
		}
		return result;
	}
