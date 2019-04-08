int isRunNian(int year);
int DiJiTian(int year, int month, int day);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int year,m1,m2,chazhi;	
		scanf("%d%d%d", &year,&m1,&m2);
		chazhi=DiJiTian(year,m2,1)-DiJiTian(year,m1,1);
		if (chazhi%7==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
int isRunNian(int year)
{
	int result;
	if(year%400==0||(year%4==0 && year%100!=0))
	{
		result=1;
	}
	else
	{
		result=0;
	}
	return result;
}
int DiJiTian(int year, int month, int day)
{
	int result=0,i;
	for(i=1;i<month;i++)
	{
		if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
		{
			result+=31;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			result+=30;
		}
		else if(i==2)
		{
			if(isRunNian(year))
			{
				result+=29;
			}
			else
			{
				result+=28;
			}
		}
	}
	result+=day;
	return result;
}