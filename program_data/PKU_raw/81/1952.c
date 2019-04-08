void main()
{
	int a[10][10],i,j,n,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		int c[10],d[10];
		for(i=0;i<5;i++)
		{
			c[i]=a[n][i];
			d[i]=a[m][i];
		}
		for(i=0;i<5;i++)
		{
			a[n][i]=d[i];
			a[m][i]=c[i];
		}
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][4]);
		}
		for(j=0;j<4;j++)
		{
			printf("%d ",a[4][j]);
		}
		printf("%d",a[4][4]);
	}
	else
	{
		printf("error");
	}
}