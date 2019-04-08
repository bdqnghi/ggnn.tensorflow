int main()
{
	int i,year,month,day,date=0;
	scanf("%d%d%d",&year,&month,&day);
	for (i=1;i<month;i++)
	{
		if (i==4 ||i==6 ||i==9 ||i==11)
			date=date+30;
		else
		{
			if (i==2)
			{
				if (year%100!=0 && year%4==0 || year%400==0)
					date=date+29;
				else 
					date=date+28;
			}
			else
				date=date+31;
		}
	}
	date =date+day;
	printf("%d\n",date);
	return 0;
}
