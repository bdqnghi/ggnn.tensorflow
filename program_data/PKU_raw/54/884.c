
void main()
{
	int sum(int a,int b,int c);
	int n,k,t;
	scanf("%d %d",&n,&k);
	t=n;
	printf("%d\n",sum(n+1,k,t));
}

int sum(int a,int b,int c)
{
	int x,j;
	if(a==1)
	{
		x=1;
		if(c!=2)
		{for(j=1;j<=c;j++)
			x=x*(c-1);
		x=x-b*(c-1);}
	}
		else 
	{
		x=sum(a-1,b,c)*c/(c-1)+b;
	}
	return(x);
}
