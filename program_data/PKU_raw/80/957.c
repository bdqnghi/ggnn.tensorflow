int main()
{
	int year,month,day,Year,Month,Day;
	scanf("%d %d %d",&year,&month,&day);
	scanf("%d %d %d",&Year,&Month,&Day);
	int m[]={0,31,59,90,120,151,181,212,243,273,304,334};
	int i,date;
	for(i=0;i<=11;i++)
	{
		if(Month==i+1)
		{
			date=m[i];
			break;
		}
	}
	date=date+Day;
	for(i=0;i<=11;i++)
	{
		if(month==i+1)
		{
			date=date+365-m[i];
			break;
		}
	}
	date=date-day;
	int r;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		r=floor((Year-year)/4)+1;
	}
	else
	{
		if(year%4==1)
		{
			r=floor((Year-year+1)/4);
		}
		else
		{
			if(year%4==2)
			{
				r=floor((Year-year+2)/4);
			}
			else
			{
				if(year%4==3)
				{
					r=floor((Year-year+3)/4);
				}
			}
		}
	}
	if(((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))&&(month>2))
	{
		r=r-1;
	}
	if(((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))&&(Month<3))
	{
		r=r-1;
	}
	int h=year%400,s=year%100;
	r=r-floor((Year-year+s)/100)+floor((Year-year+h)/400);
	date=date+r+365*(Year-year-1);
	printf("%d",date);
	return 0;
}