int main()
{
	int i,j,n,m,a[102][102]={1},sum=0;
	char b[102][102]={'@'};
	cin  >> n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin >> b[i][j];
			if(b[i][j]=='.') a[i][j]=-1;
			else if(b[i][j]=='#') a[i][j]=0;
			else if(b[i][j]=='@') a[i][j]=1;
		}
	}
	cin >> m;
	for(;m>1;m--)
	{
		for(i=1;i<=n;i++)
	    {
			for(j=1;j<=n;j++)
		    {
				if(b[i][j]=='@') 
				{
					if(b[i-1][j]=='.') a[i-1][j]=1;
					if(b[i+1][j]=='.') a[i+1][j]=1;
					if(b[i][j-1]=='.') a[i][j-1]=1;
					if(b[i][j+1]=='.') a[i][j+1]=1;
				}
			}
		}
		for(i=1;i<=n;i++)
	    {
			for(j=1;j<=n;j++)
		    {
				if(a[i][j]==1) b[i][j]='@';
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(b[i][j]=='@') sum+=1;
		}
	}
	cout << sum;
	return 0;
}