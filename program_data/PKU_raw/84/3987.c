main()
{
	int a,b,c,i,j,n,a1,a2;
	scanf("%d%d%d",&n,&a1,&a2);
	b=(a1>a2)?a1:a2;
	c=(a1<a2)?a1:a2;
	for(i=1;i<n-1;i++)
	{
		scanf("%d",&a);
		if(a>b)
		{
			c=b;b=a;
		}
		else if(a>c)c=a;
	}
	printf("%d\n%d\n",b,c);
}