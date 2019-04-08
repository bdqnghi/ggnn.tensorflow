int main()
{
	int year[2],month[2],day[2],i,s=0,j;
	scanf("%d %d %d",&year[0],&month[0],&day[0]);
	scanf("%d %d %d",&year[1],&month[1],&day[1]);
	if(year[1]-year[0]!=0)
	{for(i=year[0];i<=year[1];i++)
	{
		if(i==year[0])
		{
			for(j=month[0];j<=12;j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
					s=s+31;
				}
				else if(j==2)
				{
					if((i%4==0&i%100!=0)||i%400==0)
					s=s+29;
					else
					s=s+28;
				}
				else 
				{
					s=s+30;
				}
			}
		}
		if(i>year[0]&&i<year[1])
		{
			if((i%4==0&i%100!=0)||i%400==0)
			s=s+366;
			else
			s=s+365;
		}
		if(i==year[1])
		{
			for(j=1;j<month[1];j++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
					s=s+31;
				}
				else if(j==2)
				{
					if((i%4==0&i%100!=0)||i%400==0)
					s=s+29;
					else
					s=s+28;
				}
				else 
				{
					s=s+30;
				}
			}
		}
	}
	}
	else
	{
		for(j=month[0];j<month[1];j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				{
					s=s+31;
				}
				else if(j==2)
				{
					if((year[0]%4==0&i%100!=0)||year[0]%400==0)
					s=s+29;
					else
					s=s+28;
				}
				else 
				{
					s=s+30;
				}
		}
	}
	s=s-day[0]+day[1];
	printf("%d",s);
	return 0;
}