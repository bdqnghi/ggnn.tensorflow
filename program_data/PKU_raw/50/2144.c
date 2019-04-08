int main()
{
	int day(int m,int w);
	int w,i;
	scanf("%d",&w);
	for(i=1;i<=12;i++)
	{
		if(day(i,w))
			printf("%d\n",i);
	}
}

int day(int m,int w)
{
	int j,x,c=0;
	for(j=1;j<=m-1;j++)
	{
		c=c+31;
		if(j==4|| j==6|| j==9|| j==11)
			c--;
		if(j==2)
			c=c-3;
	}
	c=c+12;
	x=(c+w)%7;
	if(x==5)
		return(1);
	else
		return(0);
}