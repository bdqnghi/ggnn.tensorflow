int main()
{
	int i,j,m,n,a[30][30]={0},I[3000]={0},J[3000]={0},p=0;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&(a[i][j]));
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1]))
			{
				I[p]=(i-1);
				J[p]=(j-1);
				p++;
			}
		}
	}
	for(i=0;i<p;i++)
	{
		printf("%d %d\n",I[i],J[i]);
	}
	return 0;
}
