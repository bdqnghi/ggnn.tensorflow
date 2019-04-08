int Dijitian(int month,int day)
{
	int days=0,i;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			days+=31;
		}
		else
		{
			if(i==2)
			{
				days+=28;
			}
			else
			{
				days+=30;
			}
		}
	}
	days+=day;
	return days;
}
int main()
{
	int w,i;
	scanf("%d",&w);
	for(i=1;i<13;i++)
	{
		if((Dijitian(i,13)-1)%7+w==5||(Dijitian(i,13)-1)%7+w==12)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}