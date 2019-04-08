int main()
{
	int i,year,month,day,sum=0,months[50],msum=0;

	months[1]=31;
	months[2];
	months[3]=31;
	months[4]=30;
	months[5]=31;
	months[6]=30;
	months[7]=31;
	months[8]=31;
	months[9]=30;
	months[10]=31;
	months[11]=30;
	months[12]=31;

	scanf("%d%d%d",&year,&month,&day);
	if(year%4==0)
	{
		if(year%100!=0)
		{
			if(year%400==0)
			{
				months[2]=29;
			}
			else
			{
				months[2]=28;
			}
		}
		else
		{
			if(year%400==0)
			{
				months[2]=29;
			}
			else
			{
				months[2]=28;
			}
		}
	}
	else
	{
		months[2]=28;
	}
	for(i=1;i<month;i++)
	{
		msum=msum+months[i];
	}
	sum=msum+day;
	printf("%d",sum);
	return 0;
}