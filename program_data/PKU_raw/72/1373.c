int main()
{
	int m,n,a[22][22]={0};
	cin>>m>>n;
	for(int i=1;i<m+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])
				cout<<i-1<<" "<<j-1<<endl;
		}
	}
	return 0;
}