void main()
{
	int zy(int a,int b);
	int j,n,m,sum;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%d",&m);
		sum=zy(2,m);
		printf("%d\n",sum);
	}
}
	int zy(int a,int b)
	{
		int i,c,t=1;
		c=0;
		if(a==0)
			c=c+1;
		else
		{for(i=a;i*i<=b;i++)
		{
			if(b%i==0)
				c=zy(i,(b/i))+c;
		}
		if(i*i>b)
			c=c+1;}
		return(c);
	}