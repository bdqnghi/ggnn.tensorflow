void main()
{
	int a,b,i,k,n;
	scanf("%d %d",&n,&k);
	b=n-1;
	a=n-1;
	for(i=1;i<=n-1;i++)
	{
		if((a*n/(n-1)+k)%(n-1)!=0)
		{
			a=b+n-1;
			b=b+n-1;
			i=0;  
		}
		else
		{a=a*n/(n-1)+k;}
	}
	printf("%d",a*n/(n-1)+k);
} 