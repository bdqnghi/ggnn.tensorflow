int main()
{
	int m, n,x,y,i,j,sz[N][N];
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&(sz[i][j]));
		}
	}
	for(i=0,j=0;j<=n+1;j++)
	{
		sz[0][j]=0;
	}
	for(i=m+1,j=0;j<=n+1;j++)
	{
		sz[m+1][j]=0;
	}
	for(i=0,j=0;i<=m+1;i++)
	{
		sz[i][0]=0;
	}
	for(i=0,j=n+1;i<=m+1;i++)
	{
		sz[i][n+1]=0;
	}

	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sz[i][j-1]<=sz[i][j]&&sz[i][j+1]<=sz[i][j]&&sz[i-1][j]<=sz[i][j]&&sz[i+1][j]<=sz[i][j])
			{
				x=i-1;y=j-1;
				printf("%d %d\n",x,y);
			}
		}
	}
	return 0;
}