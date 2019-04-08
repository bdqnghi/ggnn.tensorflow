void main()
{
	long a,b,c,t1,i,yu=0;
	scanf("%d%d%d",&a,&b,&c);
	
	t1=(a-1)%400+1;
    
	for(i=1;i<t1;i++)
	{
		if(i%4!=0||i%100==0&&i%400!=0)
			yu=yu+365;
		else
			yu=yu+366;
	}
	for(i=1;i<b;i++)
	{
		if(i==4||i==6||i==9||i==11)
			yu=yu+30;
		else if(i==2)
		{
			if(a%4!=0||a%100==0&&a%400!=0)
				yu=yu+28;
			else
				yu=yu+29;
		}
		else
			yu=yu+31;
	}
	yu=yu+c;
	yu=yu%7;
	if(yu==0)
		printf("Sun.");
	if(yu==1)
		printf("Mon.");
	if(yu==2)
		printf("Tue.");
	if(yu==3)
		printf("Wed.");
	if(yu==4)
		printf("Thu.");
	if(yu==5)
		printf("Fri.");
	if(yu==6)
		printf("Sat.");

}