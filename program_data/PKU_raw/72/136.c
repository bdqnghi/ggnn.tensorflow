void main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	int a[22][22];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		for(j=1;j<n+1;j++)
		{
			a[0][j]=0;
			a[m+1][j]=0;
		}
		for(i=1;i<m+1;i++)
		{
			a[i][0]=0;
			a[i][n+1]=0;
		}
		a[0][0]=0;a[0][n+1]=0;a[m+1][0]=0;a[m+1][n+1]=0;
    for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])
				printf("%d %d\n",i-1,j-1);
		}
}
