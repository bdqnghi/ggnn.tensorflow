void main()
{
	int N1,N2,Y1,Y2,R1,R2,i,j,k,m,n,l,x1,x2;
	int MONTH[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int RUNMONTH[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d%d%d%d",&N1,&Y1,&R1,&N2,&Y2,&R2);
	x1=365*(N1-1);
	x2=365*(N2-1);
	for(i=0;i<N1;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			x1=x1+1;
	}
	for(i=0;i<N2;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			x2=x2+1;
	}
	for(i=1;i<Y1;i++)
	{
		if((N1%4==0&&N1%100!=0)||(N1%400==0))
			x1=x1+RUNMONTH[i];
		else x1=x1+MONTH[i];
	}
	for(i=1;i<Y2;i++)
	{
		if((N2%4==0&&N2%100!=0)||(N2%400==0))
			x2=x2+RUNMONTH[i];
		else x2=x2+MONTH[i];
	}
	x1=x1+R1;
	x2=x2+R2;
	k=x2-x1;
	printf("%d",k);
}