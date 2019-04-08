int f(int i);
int g(int i);
void main()
{
	int m,n,x,y,i,j;
	scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
	{
		x=f(i);
		y=g(i);
		if(x==1&&y==1)
			break;
	}
	j=i;
	if(j<=n)
	{
		printf("%d",j);
		for(i=j+1;i<=n;i++)
	    {
		    x=f(i);
		    y=g(i);
		    if(x==1&&y==1)
			    printf(",%d",i);
	    }
	    printf("\n");
	}
	else if(j>n)
	printf("no\n");
}
int f(int i)
{
	int x=1,j;
	for(j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
		{
			x=0;
			break;
		}
	}
	return(x);
}
int g(int i)
{
	int y,a;
	int c=0,d;
	d=i;
	while(d!=0)
	{
		a=d%10;
		c=(c+a)*10;
		d=d/10;
	}
	if(i==c/10)
		y=1;
	else
		y=0;
	return(y);
}
