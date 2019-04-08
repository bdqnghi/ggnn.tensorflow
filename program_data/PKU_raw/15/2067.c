int main()
{
	int n,i,j,a,b,c,d,k;
	scanf("%d",&n);
	c=0;
	for(i=1;i<=n;i++)
	{
		a=0;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&k);
			if(j<n)
				scanf(" ");
			if(k==0)
				a=a+1;
		}
		if(a>2)
		b=a;
		if(a>=1)
			c=c+1;
	}
	d=(b-2)*(c-2);
	printf("%d",d);
	return 0;
}