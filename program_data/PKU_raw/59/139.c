int main()
{
	int n,i,j,m,b[101][101],k,s=0;
	char a[101][101];
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			a[i][j]='#';
			b[i][j]=0;
		}
	}
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	for(k=1;k<=m-1;k++)
	{

		for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			if(a[i][j]=='@')
			{
				b[i][j]=1;
			}
			
		}
	}

		for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			if(b[i][j]==1)
			{
				if(a[i+1][j]=='.')
				{
					a[i+1][j]='@';
				}

				if(a[i-1][j]=='.')
				{
					a[i-1][j]='@';
				}
				if(a[i][j+1]=='.')
				{
					a[i][j+1]='@';
				}
				if(a[i][j-1]=='.')
				{
					a[i][j-1]='@';
				}
				b[i][j]=0;
			}
			
		}
	}
	}
	s=0;
for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			if(a[i][j]=='@')
			{
				s++;
			}
			
		}
	}
cout<<s;
	return 0;
}