
int main()
{
	int k,m,n,a[100][100],i,j,l,sum[100]={0};
	cin>>k;
	for(l=1;l<=k;l++)
	{
		cin>>m>>n;
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
				cin>>a[i][j];
		for(j=1;j<=n;j++)
			sum[l]+=a[1][j];
		for(j=1;j<=n;j++)
			sum[l]+=a[m][j];
		for(i=1;i<=m;i++)
			sum[l]+=a[i][1];
		for(i=1;i<=m;i++)
			sum[l]+=a[i][n];
		sum[l]=sum[l]-a[1][1]-a[m][1]-a[1][n]-a[m][n];
		cout<<sum[l]<<endl;
	}
		return 0;
}