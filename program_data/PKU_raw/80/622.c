int day(int year,int month,int day)
{
	int i,k=day;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10) k=k+31;
		if(i==2)
		{
			if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) k=k+29;
			else k=k+28;
		}
		if(i==4||i==6||i==9||i==11) k=k+30;
	}
	return k;
}
void main()
{
	int Y,M,D,y,m,d,a,b,c,x=0,j;
	scanf("%d%d%d%d%d%d",&Y,&M,&D,&y,&m,&d);
	if(Y>y||Y==y&&M>m||Y==y&&M==m&&D>d)
	{
		a=Y;
		b=M;
		c=D;
		Y=y;
		M=m;
		D=d;
		y=a;
		m=b;
		d=c;
	}
	for(j=Y;j<y;j++)
	{
		if(j%4==0&&j%100!=0||j%400==0) x=x+366;
		else x=x+365;
	}
	x=x+day(y,m,d)-day(Y,M,D);
	printf("%d\n",x);
}
	


	
