int main()
{
	int a[60][60]={0},m,n,i,j,i1,j1,b[60][60]={0};
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i1=1;i1<=m;i1++)
	{
		for(j1=1;j1<=n;j1++)
		{
			if(a[i1][j1]>=a[i1][j1-1]&&a[i1][j1]>=a[i1][j1+
				1]&&a[i1][j1]>=a[i1-1][j1]&&a[i1][j1]>=a[i1+1][j1])
			{
				b[i1][j1]=1;
			}
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(b[i][j]==1)
			{
				cout<<i-1<<" "<<j-1<<endl;
			}

		}
	}
	return 0;
}

