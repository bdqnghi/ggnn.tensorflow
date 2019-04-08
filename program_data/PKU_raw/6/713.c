int main()
{
	int sum[100]={0},i,j,k,h,a[100],b[100],juzhen[100][100];
	scanf("%d",&k);
	for(h=0;h<k;h++)
	{
		scanf("%d%d",&(a[h]),&(b[h]));
		for(i=0;i<a[h];i++)
		{
			for(j=0;j<b[h];j++)
			{
				scanf("%d",&(juzhen[i][j]));
			}
		}
		for(i=0;i<a[h];i++)
		{
			sum[h]=sum[h]+juzhen[i][0]+juzhen[i][b[h]-1];
		}
		for(j=1;j<b[h]-1;j++)
		{
			sum[h]=sum[h]+juzhen[0][j]+juzhen[a[h]-1][j];
		}
	}
	for(h=0;h<k;h++)
	{
		printf("%d\n",sum[h]);
	}
	return 0;
}
