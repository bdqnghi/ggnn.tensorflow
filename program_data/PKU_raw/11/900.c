void main()
{
	int year,mon,day,i,x;
	x=0;
	scanf("%d%d%d",&year,&mon,&day);
	for(i=1;i<mon;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			x=x+31;
		}
		if(i==4||i==6||i==9||i==11)
		{
			x=x+30;
		}
		if(i==2)
		{
            if(year%400==0)
			{
				x=x+29;
			}
			else if(year%4==0 && year%100!=0)
			{
				x=x+29;
			}
			else
			{
				x=x+28;
			}
		}
	}
	x=x+day;
	printf("%d",x);
}


