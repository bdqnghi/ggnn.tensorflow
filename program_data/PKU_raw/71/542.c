int main()
{
	void xiangguan(int y,int m1,int m2);
	int n,i,year,m1,m2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&year,&m1,&m2);
		xiangguan(year,m1,m2);
	}
}

void xiangguan(int y,int m1,int m2)
{
	int runnian(int y);
	int x1=0,x2=0,i,j;
	for(i=1;i<m1;i++)
	{
		x1=x1+31;
		if(i==4||i==6||i==9||i==11)
			x1--;
		if(i==2)
		{
			if(runnian(y))
			x1=x1-2;
			else
				x1=x1-3;
		}
	}
    for(j=1;j<m2;j++)
	{
		x2=x2+31;
		if(j==4||j==6||j==9||j==11)
			x2--;
		if(j==2)
		{
			if(runnian(y))
			x2=x2-2;
			else
				x2=x2-3;
		}
	}
	if((x1-x2)%7==0)
		printf("YES\n");
	else
		printf("NO\n");
}

int runnian(int y)
{
	if( ( (y%4==0)&&(y%100!=0) )||(y%400==0) )
		return(1);
	else
		return(0);
}