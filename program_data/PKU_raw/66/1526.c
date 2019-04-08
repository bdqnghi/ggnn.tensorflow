int main()
{
	int year,month,day,week=1;
	scanf("%d %d %d",&year,&month,&day);
	week=(week+year-1+(year-1)/4+(year-1)/400-(year-1)/100)%7;
	int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%400==0||(year%100!=0&&year%4==0))
	   mon[1]=29; 
	for(int i=0;i<month-1;i++)
	    week=(week+mon[i])%7;
	week=(week-1+day)%7;
		switch (week)
	{
	case 0:
		printf("Sun.");
		break;
	case 1:
		printf("Mon.");
		break;
	case 2:
		printf("Tue.");
		break;
	case 3:
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;	
	default :
		printf("error"); 
	}
} 