//***********************************************************
//????
int main()
{
	int n,m,count=0;
	char a[110][110]={'#'},b[110][110]={'#'};
	cin>>n;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	cin>>m;

	for(int k=0;k<m-1;k++)
	{
		for(int i=0;i<=n+1;i++)
			for(int j=0;j<=n+1;j++)
			{
				if(a[i][j]=='@')
				{
					for(int x=-1;x<=1;x++)
						for(int y=-1;y<=1;y++)
						{
							if(x==y||x+y==0)continue;
							else if(a[i+x][j+y]=='.')
								b[i+x][j+y]='@';
						}
				}
			}
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(b[i][j]=='@')
					a[i][j]='@';
			}
	}
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
		{
			if(a[i][j]=='@')
				count++;
		}
	cout<<count;
	return 0;
}