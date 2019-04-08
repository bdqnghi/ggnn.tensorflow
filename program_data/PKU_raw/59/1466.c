int main()
{
	char a[2][102][102];
	int i,n,j,t,m,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[0][i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==0||i==n+1||j==0||j==n+1)
				a[0][i][j]='#';
		}
	}
	cin>>m;
    t=1;
    while(t<m )
	{
		
		for(i=n;i>=1;i--)
		{
			for(j=n;j>=1;j--)
			{
				if(a[(t+1)%2][i][j]!='#'&&(a[(t+1)%2][i-1][j]=='@'||a[(t+1)%2][i][j-1]=='@'||a[(t+1)%2][i][j+1]=='@'||a[(t+1)%2][i+1][j]=='@'))
					a[t%2][i][j]='@';
				else a[t%2][i][j]=a[(t+1)%2][i][j];
			}
		}
		t++;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[(m-1)%2][i][j]=='@')
				sum++;
		}
	}
	cout<<sum<<endl;

	return 0;
}
