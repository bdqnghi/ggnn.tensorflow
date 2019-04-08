main()
{
	int a,n,i,j,b,p,x;
	scanf("%d",&a);
	for(i=3;i<=a/2;i++)
	{    j=1;
		for(n=2;n<i;n++)
		{
			if(i%n==0) j=0;
		}
		 if(j)
		{
			b=a-i; x=1;
		    for(p=2;p<b;p++)
			{
				if(b%p==0) x=0;
			}
			if(x) 
			{
				printf("%d %d\n",i,b);
			}
		}
	}
	return 0;
}
