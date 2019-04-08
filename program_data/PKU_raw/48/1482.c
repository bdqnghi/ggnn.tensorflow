int main()
{
	int i,j,d,m,n,a[20][20][20]={0};
	scanf("%d%d",&m,&n);
	a[1][5][5]=m;
	for(d=1;d<=n;d++)
	{
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				if(a[d][i][j]!=0)
				{
					a[d+1][i-1][j-1]=a[d+1][i-1][j-1]+a[d][i][j];
					a[d+1][i-1][j]=a[d+1][i-1][j]+a[d][i][j];
					a[d+1][i-1][j+1]=a[d+1][i-1][j+1]+a[d][i][j];
					a[d+1][i][j-1]=a[d+1][i][j-1]+a[d][i][j];
					a[d+1][i][j+1]=a[d+1][i][j+1]+a[d][i][j];
					a[d+1][i+1][j-1]=a[d+1][i+1][j-1]+a[d][i][j];
					a[d+1][i+1][j]=a[d+1][i+1][j]+a[d][i][j];
					a[d+1][i+1][j+1]=a[d+1][i+1][j+1]+a[d][i][j];
					a[d+1][i][j]=a[d+1][i][j]+a[d][i][j]*2;
				}
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		printf("%d %d %d %d %d %d %d %d %d\n",a[n+1][i][1],a[n+1][i][2],a[n+1][i][3],a[n+1][i][4],a[n+1][i][5],a[n+1][i][6],a[n+1][i][7],a[n+1][i][8],a[n+1][i][9]);
	}
	return 0;

}