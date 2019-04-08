int main()
{
	int a[22][22];
	int m,n,i,j,c;
	scanf("%d%d",&m,&n);
	for(i=0;i<=m+1;i++)
	{
		a[i][0]=-1;
		a[i][n+1]=-1;
	}
	for(i=0;i<n+2;i++)
	{
		a[0][i]=-1;
		a[m+1][i]=-1;

	}
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
		scanf("%d",&a[i][j]);
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
		{
			c=a[i][j];
			if((c>=a[i][j+1])&&(c>=a[i][j-1])&&(c>=a[i+1][j])&&(c>=a[i-1][j]))
				printf("%d %d\n",i-1,j-1);
		}
		return 0;
}
