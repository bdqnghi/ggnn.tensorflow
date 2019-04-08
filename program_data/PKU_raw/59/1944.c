int main()
{
	int n,m;
	cin>>n;
	char a[1000][1000]={'0'};
	int i,j,k,o,p;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
	       cin>>a[i][j];
	cin>>m;
	for(i=1;i<=m-1;i++)
	{
		for(k=1;k<=n;k++)
			for(j=1;j<=n;j++)
			{
				if(a[k][j]=='@')
				{
					if(a[k][j+1]=='.')
						a[k][j+1]='&';
					if(a[k][j-1]=='.')
						a[k][j-1]='&';
					if(a[k-1][j]=='.')
						a[k-1][j]='&';
					if(a[k+1][j]=='.')
						a[k+1][j]='&';
				}
			}
		for(o=1;o<=n;o++)
			for(p=1;p<=n;p++)
			{
				if(a[o][p]=='&')
					a[o][p]='@';
			}
	}
	int count=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
				count++;
		}

    cout<<count<<endl;
}