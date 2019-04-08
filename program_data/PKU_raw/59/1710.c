int main()
{
	int a[101][101];
	int m,n,i,j,k;
	char c;
	cin>>n;
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			cin>>c;
			if(c=='.') a[i][j]=1;
			if(c=='#') a[i][j]=0;
			if(c=='@') a[i][j]=2;
		}
	}
	cin>>m;
	for(k=2;k<=m;++k)
	{
		for(i=1;i<=n;++i)
		{
			for(j=1;j<=n;++j)
			{
				if(a[i][j]==k&&a[i-1][j]==1)
					a[i-1][j]+=k;
				if(a[i][j]==k&&a[i+1][j]==1)
					a[i+1][j]+=k;
				if(a[i][j]==k&&a[i][j-1]==1)
					a[i][j-1]+=k;
				if(a[i][j]==k&&a[i][j+1]==1)
					a[i][j+1]+=k;
			}
		}
	}
	int s=0;
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
			s=s+(a[i][j]>=2);
	}
	cout<<s;
	return 0;
}