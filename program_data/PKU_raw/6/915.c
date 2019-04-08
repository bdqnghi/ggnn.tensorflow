int main()
{
	int k;//??????
	int m;//????
	int n;//????
	int i,j,t;
	int a[100][100];
	scanf("%d",&k);
	for(t=1;t<=k;t++)
	{
		int sum=0;
		scanf("%d %d",&m,&n);
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
        for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				sum=sum+a[i][j];
			}
		}
		for(i=1;i<=m-2;i++)
		{
			for(j=1;j<=n-2;j++)
			{
				sum=sum-a[i][j];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
   

