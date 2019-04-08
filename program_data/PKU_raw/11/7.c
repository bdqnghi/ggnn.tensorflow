void main()
{
	struct date
	{
		int year;
		int month;
		int day;
		int days;
	}date1;
	scanf("%d %d %d",&date1.year,&date1.month,&date1.day);
    int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	date1.days=0;
	int i;
	if (date1.month>1)
	{
		for ( i=0;i<=date1.month-2;i++)
		{
			date1.days=date1.days+b[i];
		}
		date1.days=date1.days+date1.day;
	}
	else 
	{
		date1.days=date1.day;
	}
	printf("%d",date1.days);
}