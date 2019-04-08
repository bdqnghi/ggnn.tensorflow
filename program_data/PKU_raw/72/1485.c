void main()
{
	int n,m,a[25][25],i,j;
	char c;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d%c",&a[i][j],&c);
    for(j=0;j<=n+1;j++)
	{
		a[0][j]=-1;
		a[m+1][j]=-1;
	}
	for(i=0;i<=m+1;i++)
	{
		a[i][0]=-1;
		a[i][n+1]=-1;
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				printf("%d %d\n",i-1,j-1);
		}
	}
}

