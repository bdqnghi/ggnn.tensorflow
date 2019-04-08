int main()
{
	int count,m,n,array[100][100],sum[100]={0},i,j,p;
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		scanf("%d%d",&m,&n);
		for(j=0;j<m;j++)
			for(p=0;p<n;p++)
				scanf("%d",&array[j][p]);
		for(j=0;j<n;j++)
		{
			sum[i]=sum[i]+array[0][j];
			if(m>1)
			sum[i]=sum[i]+array[m-1][j];
		}
		for(j=1;j<m-1;j++)
		{
			sum[i]=sum[i]+array[j][0];
			sum[i]=sum[i]+array[j][n-1];
		}
	}
	for(i=0;i<count;i++)
	printf("%d\n",sum[i]);
    return 0;
}

