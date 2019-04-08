int main()
{
	int num=0;
	int n,m;
	int i,j;
	char a[110][110],b[110][110];
	cin>>n;
	for(i=0;i<=n-1;++i)
	{
		for(j=0;j<=n-1;++j)
		{
			cin>>a[i][j];
		}
	}
	for(cin>>m;m>=2;--m)
	{
		for(i=0;i<=n-1;++i)
		{
			for(j=0;j<=n-1;++j)
			{
				b[i][j]=a[i][j];
			}
		}
		for(i=0;i<=n-1;++i)
		{
			for(j=0;j<=n-1;++j)
			{
				if(a[i][j]=='@')
				{
					if(a[i-1][j]=='.')
						b[i-1][j]='@';
					if(a[i+1][j]=='.')
						b[i+1][j]='@';
					if(a[i][j-1]=='.')
						b[i][j-1]='@';
					if(a[i][j+1]=='.')
						b[i][j+1]='@';
				}
			}
		}
		for(i=0;i<=n-1;++i)
		{
			for(j=0;j<=n-1;++j)
			{
				if(b[i][j]=='@')
					a[i][j]='@';
			}
		}	
	}
	for(i=0;i<=n-1;++i)
	{
		for(j=0;j<=n-1;++j)
		{
			if(a[i][j]=='@')
			{
				num++;
			}
		}
	}
	cout<<num;
	return 0;
}
	
	
	