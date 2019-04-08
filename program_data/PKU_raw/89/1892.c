
main ()
{
	int n,a[100000][2],i,t=0,j,b[10000],c[10000],m=0;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		scanf("%d %d",&a[i-1][0],&a[i-1][1]);
		t=t+1;
		if(a[i-1][0]==0&&a[i-1][1]==0)
        {
			break;
		}
	}
	for(i=1;i<=n;i++)
	{
		b[i-1]=0;
	}
	for(i=1;i<=n;i++)
	{
		c[i-1]=0;
	}
	for(j=0;j<=n-1;j++)
	{
		for(i=1;i<=t-1;i++)
		{
			if(a[i-1][1]==j)
			{b[j]=b[j]+1;}
		}
	}
	for(j=0;j<=n-1;j++)
	{
		for(i=1;i<=t-1;i++)
		{
			if(a[i-1][0]==j)
			c[j]=c[j]+1;
		}
	}
	for(j=0;j<=n-1;j++)
	{
		if(b[j]==n-1&&c[j]==0)
		printf("%d",j);
		m=1;
	}
	if(m==0)
	printf("NOT FOUND");
}

		