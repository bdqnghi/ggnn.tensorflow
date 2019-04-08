void main()
{
	int year,month,day;
	int feb,i,n=0;

	scanf("%d%d%d",&year,&month,&day);

	if (year%4!=0)
		feb=28;
	else
	{
		if (year%100!=0)
			feb=29;
		else
		{
			if (year%400==0)
				feb=29;
			else
				feb=28;
		}
	}
			

	
	for (i=1;i<month;i++)
	{
		if (i==2 )
			n=n+feb;
		else
		{
			if (i==4||i==6||i==9||i==11)
				n=n+30;
			else
				n=n+31;
		}
	}

	n=n+day;

	printf("%d",n);




}
