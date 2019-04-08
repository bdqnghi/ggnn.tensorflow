void main()
{
	int n,k,i=1,a,b=1;
	scanf("%d%d",&n,&k);
	a=1;
	for(;i<n;)
	{
		for(;(n*a+k)%(n-1)!=0;)
		{
			b=b+1;
			a=b;
			i=1;
		}
		a=(n*a+k)/(n-1);
		i=i+1;
	}
	printf("%d\n",n*a+k);
}