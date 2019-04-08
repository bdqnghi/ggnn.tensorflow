main()
{
	int a,n=0,b,i,c;
	scanf("%d",&a);
	b=a;
	while(a>=1)
	{
		a=a/10;
		n=n+1;
	}
	for(i=0;i<n;i++)
	{
		c=b%10;
		printf("%d",c);
		b=(b-b%10)/10;
	}
}