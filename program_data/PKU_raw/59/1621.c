int main()
{
	int n,m,num=0;
	char a[101][101];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	for(int k=1;k<m;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='@')
				{
					if(a[i+1][j]=='.')
					{
						a[i+1][j]='!';
					}
					if(a[i-1][j]=='.')
					{
						a[i-1][j]='!';
					}
					if(a[i][j-1]=='.')
					{
						a[i][j-1]='!';
					}
					if(a[i][j+1]=='.')
					{
						a[i][j+1]='!';
					}
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]=='!')
				{
					a[i][j]='@';
				}
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
			{
				num++;
			}
		}
	}
	cout<<num<<endl;
	return 0;
}
