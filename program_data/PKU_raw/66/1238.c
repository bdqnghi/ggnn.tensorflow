int main()
{
	int a,b,c,year=0,month=0,j,days;
	scanf("%d%d%d",&a,&b,&c);
	if(a/4==0)
		year=a-1;
	else if(a/4!=0&&a/100==0)
	{
		year=a+a/4;
		if(a%4==0)
			year--;
	}		
	else if(a/100!=0&&a/400==0)
	{
		year=a+a/4-a/100;
		if(a%4==0)
			year--;
	}
	else if(a/400!=0)
		year=a+a/4-a/100+a/400-1;
	{
		if(a%4==0)
			year--;

	}
	
	for(j=1;j<b;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			month+=31;
		else if(j==4||j==6||j==9||j==11)
			month+=30;
		else 
		{
			if((a%4==0&&a%100!=0)||a%400==0)
				month+=29;
			else
				month+=28;
		}
	}
	days=year+month+c;
	if(days%7==0)
		printf("Sun.");
	if(days%7==1)
		printf("Mon.");
	if(days%7==2)
		printf("Tue.");
	if(days%7==3)
		printf("Wed.");
	if(days%7==4)
		printf("Thu.");
	if(days%7==5)
		printf("Fri.");
	if(days%7==6)
		printf("Sat.");
	return 0;
}
