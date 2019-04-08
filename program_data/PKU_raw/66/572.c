void main()
{
	int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year ,month, day;
	char out[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	int i,days=1,temp;
	scanf("%d%d%d",&year,&month,&day);
	temp=year%400+400;
	for(i=2;i<=temp;i++)
	{
		if((i-1)%4==0&&(i-1)%100!=0||(i-1)%400==0)
		{
			days=(days+366)%7;
		}
		else 
		{
			days=(days+365)%7;
		}
	}
	for(i=2;i<=month;i++)
	{
		if(year%4==0&&year%100!=0||year%400==0)
		{
			days=(days+month2[i-2])%7;
		}
		else 
		{
			days=(days+month1[i-2])%7;
		}
	}
	days=(days+day-1)%7;
	if(days==0)
	{
		printf("%s\n",out[6]);
	}
	else 
	{
		printf("%s\n",out[days-1]);
	}
}




