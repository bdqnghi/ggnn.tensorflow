void main()
{
	void juzhen();
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		juzhen();
	}
}

void juzhen()
{
	int m,n,i=0,j=0,f=0;int a[100][100];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<n;j++)
	{
		f=f+a[0][j]+a[m-1][j];
	}
	for(i=1;i<m-1;i++)
	{
		f=f+a[i][0]+a[i][n-1];
	}
	printf("%d\n",f);
}
