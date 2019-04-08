
main()
{
	int n,i,j,a=0,b=0,c=0,s;
	int x[1000][1000];
	int y[1000];

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		y[i]=0;
		a=0;
		for (j=1;j<=n;j++)
		{
			scanf("%d",&x[i][j]);
			if(x[i][j]==0)
			{
				a=a+1;
			}
		}

		if (a>0)
		{
			y[i]=1;
		}
		if (a>b)
		{
			b=a;
		}

	}

	for(i=1;i<=n;i++)
	{
		if(y[i]>0)
		{
			c=c+1;
		}
	}
	s=(b-2)*(c-2);
	printf("%d",s);


	
} 