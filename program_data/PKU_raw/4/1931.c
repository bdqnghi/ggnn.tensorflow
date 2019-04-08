int main()
{ 
	int m,n,a[100][100]={{0}};
	cin>>m>>n;
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		int u=i;
		int j=1;
		for(;u>=1&&j<=m;u--,j++)
		{
			cout<<a[j][u]<<endl;
		}
	}
	for(i=2;i<=m;i++)
	{
		int u=i,j=n;
		for(;u<=m&&j>=1;u++,j--)
		{
			cout<<a[u][j]<<endl;
		}
	}
	return 0;
}
