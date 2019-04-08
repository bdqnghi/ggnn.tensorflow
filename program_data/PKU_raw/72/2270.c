
int main()
{
	int m,n,i,j;
	int a[30][30];
	int len[30][30],row[30][30];
	scanf("%d%d",&m,&n);
	for(i=0;i<=m+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			len[i][j]=i-1;
			row[i][j]=j-1;
		}
	}
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1])&&(a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j]))
			{printf("%d %d\n",len[i][j],row[i][j]);}
		}
	}

	return 0;
}