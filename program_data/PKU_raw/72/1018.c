int main()
{
	int n,m,a,b;
	scanf("%d%d",&n,&m);
	int sz[1000][1000];
	for(a=1;a<n+1;a++)
	{
		for(b=1;b<m+1;b++)
		{
			scanf("%d",&(sz[a][b]));
		}
	}

	for(a=0;a<n+2;a++)
	{
		sz[a][0]=0;
	}
	for(a=0;a<n+2;a++)
	{
		sz[a][m+1]=0;
	}
	for(b=0;b<m+2;b++)
	{
		sz[0][b]=0;
	}
	for(b=0;b<m+2;b++)
	{
		sz[n+1][b]=0;
	}
	for(int c=1;c<n+1;c++)
	{
		for(int d=1;d<m+1;d++)
		{
            	if(sz[c-1][d]<=sz[c][d]&&sz[c+1][d]<=sz[c][d]&&sz[c][d-1]<=sz[c][d]&&sz[c][d+1]<=sz[c][d])
				{
					printf("%d %d\n",c-1,d-1);
				}
		}
	}
			
	return 0;
}