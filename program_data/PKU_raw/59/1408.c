int main()
{
	int n,i,j,l,m,x,y,z=0;
	char a[100][100],b[100][100];
	cin>>n;
	for (i=0;i<=n-1;i++)
	{
		for (j=0;j<=n-1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	for (l=1;l<=m-1;l++)
	{
	for (i=0;i<=n-1;i++)
	{
		for (j=0;j<=n-1;j++)
		{
			if (a[i][j]=='@')
			{
				for (x=-1;x<=1;x++)
				{
						if((a[i+x][j]=='.')&&(i+x<=n-1)&&(i+x>=0))
							b[i+x][j]='@';
				}
				for (y=-1;y<=1;y++)
				{
						if((a[i][j+y]=='.')&&(j+y<=n-1)&&(j+y>=0))
							b[i][j+y]='@';
				}
			}
		}
	}
	for (i=0;i<=n-1;i++)
	{
		for (j=0;j<=n-1;j++)
		{
			if(b[i][j]=='@')
				a[i][j]='@';
		}
	}

	}
	for (i=0;i<=n-1;i++)
	{
		for (j=0;j<=n-1;j++)
		{
			if	(a[i][j]=='@')
				z++;
		}
	}
	cout<<z;
	cin.get();cin.get();
	return 0;
}

