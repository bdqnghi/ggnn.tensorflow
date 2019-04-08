int main()
{
	int n,i,j,s=0;
	int w[1000][1000];
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			scanf("%d ",&w[i][j]);
		}
		scanf("%d\n",&w[i][n-1]);
	}
	for(j=0;j<n-1;j++)
		{
			scanf("%d ",&w[n-1][j]);
		}
	scanf("%d",&w[n-1][n-1]);
	for(i=2;i<n-2;i++)
	{
		for(j=2;j<n-2;j++)
		{
			if(w[i][j]==255) s++;
		}
	}
	printf("%d",s);
}
