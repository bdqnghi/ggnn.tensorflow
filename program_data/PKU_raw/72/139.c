void main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int a[23][22];
	for(j=0;j<=n;j=j+1)
	{
		a[0][j]=0;
		a[m+1][j]=0;
	}
	for(i=0;i<=m+1;i=i+1)
		a[i][n+1]=0;

	for(i=1;i<=m;i=i+1)
	{
		a[i][0]=0;
		for(j=1;j<=n;j=j+1)
			scanf("%d",&a[i][j]);
	}
	for(i=1;i<=m;i=i+1)
	{
		for(j=1;j<=n;j=j+1)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
				printf("%d %d\n",i-1,j-1);
		}
	}
}
