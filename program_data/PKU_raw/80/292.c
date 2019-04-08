void main()
{
	int y1,m1,d1,y2,m2,d2,i;
    int a1=0,a2=0,b1=0,b2=0,n1,n2,n;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	for(i=1;i<y1;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			a1=a1+366;
		else a1=a1+365;
	}
    for(i=1;i<m1;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			b1=b1+31;
		else if(i==4||i==6||i==9||i==11)
			b1=b1+30;
		else if(y1%4==0&&y1%100!=0||y1%400==0)
			b1=b1+29;
		else b1=b1+28;
	}
    for(i=1;i<y2;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			a2=a2+366;
		else a2=a2+365;
	}
    
    for(i=1;i<m2;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			b2=b2+31;
		else if(i==4||i==6||i==9||i==11)
			b2=b2+30;
		else if(y2%4==0&&y2%100!=0||y2%400==0)
			b2=b2+29;
		else b2=b2+28;
	}
	n1=a1+b1+d1;
	n2=a2+b2+d2;
	n=n2-n1;
	printf("%ld\n",n);
}