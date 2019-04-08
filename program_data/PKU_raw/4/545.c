int main()
{
	int q,m,n,a[100][100]={0},i,j;
	cin>>m>>n;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<=m+n-2;i++)
	{
		for(j=0;i-j>=0;j++)
		{
			if(j<m&&i-j<n)
			cout<<a[j][i-j]<<endl;
		}
	}
	cin>>q;
	return 0;
}