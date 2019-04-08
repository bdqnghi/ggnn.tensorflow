int main()
{
	char a[100][100];
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	int m;
	cin>>m;
	for(m=m;m>1;m--)
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
			{
				if(i+1<n)
				{
					if(a[i+1][j]=='.')
						a[i+1][j]='b';
				}

				if(i-1>=0)
				{
					if(a[i-1][j]=='.')
						a[i-1][j]='b';
				}

				if(j+1<n)
				{
					if(a[i][j+1]=='.')
						a[i][j+1]='b';
				}
	
				if(j-1>=0)
				{
					if(a[i][j-1]=='.')
						a[i][j-1]='b';
				}
			}
		}
	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='b')
					a[i][j]='@';
			}
		}
	}
	int k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				k++;
		}
	}
	cout<<k<<endl;
	return 0;
	}
