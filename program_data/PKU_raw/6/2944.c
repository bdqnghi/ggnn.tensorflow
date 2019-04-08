
int main()
{
	int m,M,i,j,sum[1000];
	int row[1000],col[1000];
	int sz[1000][1000];
	scanf("%d",&M);
	for(m=0;m<M;m++)
	{
		sum[m]=0;
		for(i=0;i<row[m];i++)
		{
			for(j=0;j<col[m];j++)
			{
				sz[i][j]=0;
			}
		}

		scanf("%d%d",&row[m],&col[m]);

		for(i=0;i<row[m];i++)
		{
			for(j=0;j<col[m];j++)
			{
				scanf("%d",&sz[i][j]);
			}
		}

		for(j=0;j<col[m];j++)
		{
			sum[m]+=sz[0][j];
			sum[m]+=sz[row[m]-1][j];
		}
		for(i=0;i<row[m];i++)
		{
			sum[m]+=sz[i][0];
			sum[m]+=sz[i][col[m]-1];
		}
		sum[m]=sum[m]-sz[0][0]-sz[row[m]-1][col[m]-1]-sz[0][col[m]-1]-sz[row[m]-1][0];

	}
	for(m=0;m<M;m++)
		printf("%d\n",sum[m]);
	return 0;
}