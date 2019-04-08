int main()
{
	int year,month,day,n;
	scanf("%d%d%d",&year,&month,&day);
	if(month==1)
	{
		n=day;
	}
	else if(month==2)
	{
		n=31+day;
	}
	else if((year%4!=0||year%100==0)&&year%400!=0)
	{
		if(month<8)
		{
					if(month%2==0)
					{
						n=31*(month-1)-2-month/2+day;
					}
					else
					    n=31*(month-1)-2-(month-1)/2+day;
		}
		else
			if(month%2==0)
			{
				n=31*4+28+30*2+(month-8)*31-(month/2-5)+day;
			}
			else
				n=31*4+28+60+(month-8)*31-((month-1)/2-4)+day;
	}
	else
			if(month<8)
		{
					if(month%2==0)
					{
						n=31*(month-1)-1-month/2+day;
					}
					else
					    n=31*(month-1)-1-(month-1)/2+day;
		}
		else
			if(month%2==0)
			{
				n=31*4+29+30*2+(month-8)*31-(month/2-5)+day;
			}
			else
				n=31*4+29+60+(month-8)*31-((month-1)/2-4)+day;
			printf("%d\n",n);
	return 0;
}