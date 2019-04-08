int main()
{
	int i,year,month,data,days=0;
	scanf("%d%d%d",&year,&month,&data);
	days=data;
	if(month==1)
	{
		days=days;
	}
	else
	{
		for(i=1;i < month;i++)
        {
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			days=days+31;
			else
			if(i==4||i==6||i==9||i==11)
			days=days+30;
		    else
		    if((year%4==0&&year%100!=0)||(year%400==0))
			days=days+29;
			else days=days+28;
		} days=days;
	}
	printf("%d",days);
	return 0;
}

