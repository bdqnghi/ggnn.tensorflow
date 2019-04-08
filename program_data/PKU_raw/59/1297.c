int main()
{
	int n,m;
	int i,j,k,mark[102][102],markb[102][102];
	char a[102][102];
	scanf("%d",&n);
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			mark[i][j]=0;
		}
	}
	for(i=1;i<=n;i++)
	{
		getchar();
		for(j=1;j<=n;j++)
		{
			scanf("%c",&a[i][j]);
			if(a[i][j]=='.')
				mark[i][j]=0;
			else if(a[i][j]=='@')
				mark[i][j]=1;
			else 
				mark[i][j]=-1;
			markb[i][j]=mark[i][j];
		}
	}

	scanf("%d",&m);
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(mark[i][j]==1)
				{
					if(mark[i+1][j]==0)  markb[i+1][j]=1;
					if(mark[i-1][j]==0)  markb[i-1][j]=1;
					if(mark[i][j+1]==0)  markb[i][j+1]=1;
					if(mark[i][j-1]==0)  markb[i][j-1]=1;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				mark[i][j]=markb[i][j];
			}
		}
	}
	int count=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(mark[i][j]==1)
				count++;
		}
	}
	printf("%d",count);

	return 0;
}
