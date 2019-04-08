int main()
{
	int year,month,day,days=0;
	int i;
	scanf("%d%d%d",&year,&month,&day);
	if(year%400!=0)
		year=year%400;
	else
		year=400;
	for(i=1;i<year;i++)
	{
		if(i%4==0&&i%100!=0)
			days+=366;
		else
			days+=365;
	}
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			days+=31;
		else if(i==4||i==6||i==9||i==11)
			days+=30;
		else if((year%4==0&&year%100!=0||year==400)&&i==2)
			days+=29;
		else
			days+=28;
	}
	days+=day;
	if(days%7==1)
		printf("Mon.") ;
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
	if(days%7==0)
		printf("Sun.");
	return 0;
}

