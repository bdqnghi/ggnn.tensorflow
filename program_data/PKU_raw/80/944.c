int main()
{
	int a,b,c,d,e,f,days,i;
	days=0;
	scanf("%d%d%d\n",&a,&b,&c);
	scanf("%d%d%d",&d,&e,&f);
	for(i=a;i<d;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			days=days+366;
		else
			days=days+365;
	}
	if(b<e)
	{
		for(i=b;i<e;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				days=days+31;
			else if(i==4||i==6||i==9||i==11)
				days=days+30;
			else if((d%4==0&&d%100!=0)||(d%400==0))
				days=days+29;
			else 
				days=days+28;
		}
	}
	if(b>e)
	{
		for(i=e;i<b;i++)
		{
			if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
				days=days-31;
			else if(i==4||i==6||i==9||i==11)
				days=days-30;
			else if((d%4==0&&d%100!=0)||(d%400==0))
				days=days-29;
			else 
				days=days-28;
		}
	}
	days=days+f-c;
	printf("%d",days);
	return 0;
}