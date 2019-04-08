int main()
{
	int a[25][25];
	int n,m,i,j;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		a[i][0]=a[i][n+1]=-1;
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			a[0][j]=a[m+1][j]=-1;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
				printf("%d %d\n",i-1,j-1);
		}
	}
	return 0;
}