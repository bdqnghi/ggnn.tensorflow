int due(int high[22][22],int i,int j)
{
	int z=1;
	if(high[i][j]>=high[i][j-1]&&high[i][j]>=high[i][j+1]&&high[i][j]>=high[i+1][j]&&high[i][j]>=high[i-1][j])
		z=0;
	return(z);
}
int main()
{
	int i,j,n,m,high[22][22];
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&high[i][j]);
		}
	}
	for(j=0;j<=n+1;j++)  high[0][j]=0;
	for(i=0;i<=m+1;i++)  high[i][0]=0;
	for(j=0;j<=n+1;j++)  high[m+1][j]=0;
	for(i=0;i<=m+1;i++)  high[i][n+1]=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(due(high,i,j)==0)
				printf("%d %d\n",i-1,j-1);
		}
	}
}

