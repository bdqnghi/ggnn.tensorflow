int main()
{
	char a[102][102][102];
	int i,j,s,n,m;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[0][i][j];
	cin>>m;
	for(s=1;s<=m+1;s++)
		for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					a[s][i][j]=a[0][i][j];
	for(s=0;s<m;s++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[s][i][j]=='@')
			{
					a[s+1][i][j]='@';
				if(a[s][i+1][j]=='.')
					a[s+1][i+1][j]='@';
				if(a[s][i-1][j]=='.')
									a[s+1][i-1][j]='@';
				if(a[s][i][j+1]=='.')
													a[s+1][i][j+1]='@';
				if(a[s][i][j-1]=='.')
													a[s+1][i][j-1]='@';
			}

	}
	int count=0;
	for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					if(a[m-1][i][j]=='@')
						count++;
	cout<<count;
	return 0;
}
