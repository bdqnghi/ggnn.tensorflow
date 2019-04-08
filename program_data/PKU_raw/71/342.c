int main()
{
	int fun(int x,int y);
	int value(int x,int y);
	int n,year,month1,month2,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&year,&month1,&month2);
		a=fun(year,month1);
		b=fun(year,month2);
		if((value(a,b))%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

int fun(int x,int y)
{
	int k=0,days;
	if((x%4==0&&x%100!=0)||x%400==0)
		k=1;
	if(y==1)
		days=0;
	if(y==2)
		days=31;
	if(y==3)
		days=31+28+k;
	if(y==4)
		days=31+28+31+k;
	if(y==5)
		days=31+28+31+30+k;
	if(y==6)
		days=31+28+31+30+31+k;
	if(y==7)
		days=31+28+31+30+31+30+k;
	if(y==8)
		days=31+28+31+30+31+30+31+k;
	if(y==9)
		days=31+28+31+30+31+30+31+31+k;
	if(y==10)
		days=31+28+31+30+31+30+31+31+30+k;
	if(y==11)
		days=31+28+31+30+31+30+31+31+30+31+k;
	if(y==12)
		days=31+28+31+30+31+30+31+31+30+31+30+k;
	return(days);
}

int value(int x,int y)
{
	int c;
	if(x>y)
		c=x-y;
	else
		c=y-x;
	return(c);
}