int main()
{
	int n=0;
	cin>>n;
	int i=0,j=0;
	char a[100][100]={'\0'};
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int day=0;
	cin>>day;
	int k=0;
	int use[100][100]={0};
	for (k=1;k<day;k++)
	{
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
				if (use[i][j]==0&&a[i][j]=='@')
				{
					
					if (a[i+1][j]=='.')
					{
						use[i+1][j]=1;
						a[i+1][j]='@';
					}
					if (a[i-1][j]=='.')
					{
						use[i-1][j]=1;
						a[i-1][j]='@';
					}
					if (a[i][j+1]=='.')
					{
						use[i][j+1]=1;
						a[i][j+1]='@';
					}
					if (a[i][j-1]=='.')
					{
						use[i][j-1]=1;
						a[i][j-1]='@';
					}
				}
			}
		}
		for (i=0;i<100;i++)
		{
			for (j=0;j<100;j++)
			{
				use[i][j]=0;
			}
		}
	}
	int times=0;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (a[i][j]=='@')
				times++;
		}
	}
	cout<<times<<endl;
	return 0;
}