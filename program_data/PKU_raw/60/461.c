main()
{
	int a,b,n,i,j,p;
	scanf("%d",&n);
	if(n<=4)
	{
		printf("empty");
	}
	else if(n==5||n==6)
	{
		printf("3 5");
	}
	else
	{
		for(i=3;i<=n-2;i++)
		{
			a=0;b=0;
			p=(i+2)/2;
			for(j=2;j<p;j++)
			{
				if(i%j==0)
					a=1;
			}
			for(j=2;j<p;j++)
			{
				if((i+2)%j==0)
					b=1;
			}
			if(a!=1&&b!=1)
			{
				printf("%d",i);
				printf(" ");
				printf("%d\n",i+2);
			}
			else
				continue;
		}
	}
}