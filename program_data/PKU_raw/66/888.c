int main()
{
	int i,year,month,day;
	int sumday=0,xingqiji;
	scanf("%d %d %d",&year,&month,&day);
	sumday=(year-1)*(365%7)+(year-1)/4-(year-1)/100+(year-1)/400;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			sumday+=3;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			sumday+=2;
		}
		else if(i==2)
		{
			if((year%4==0&&year%100!=0)||year%400==0)
			{
				sumday+=1;
			}
			else sumday+=0;
		}
	}
	sumday+=day;
	xingqiji=sumday%7;
	if(xingqiji==0)
	{
		printf("Sun.");
	}
	else if(xingqiji==1)
	{
		printf("Mon.");
	}
	else if(xingqiji==2)
	{
		printf("Tue.");
	}
	else if(xingqiji==3)
	{
		printf("Wed.");
	}
	else if(xingqiji==4)
	{
		printf("Thu.");
	}
	else if(xingqiji==5)
	{
		printf("Fri.");
	}
	else printf("Sat.");
	return 0;
}