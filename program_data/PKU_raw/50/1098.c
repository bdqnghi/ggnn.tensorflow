void main()
{
	int w,i,day[13];
	scanf("%d",&w);
	day[1]=w+12;
	for(i=1;i<12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)day[i+1]=day[i]+31;
		else if(i==2)day[i+1]=day[i]+28;
		else if(i==4||i==6||i==9||i==11)day[i+1]=day[i]+30;
	}
	for(i=1;i<=12;i++)
	{
		if(day[i]%7==5)printf("%d\n",i);
	}
}