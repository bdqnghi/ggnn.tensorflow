int main()
{
	int k,m,n,a[110][110],sum=0;
	cin>>k;
	for(int e=1;e<=k;e++)
	{
		cin>>m>>n;
		for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		if(m==1&&n==1)
			cout<<a[1][1]<<endl;
		else
		{
			for(int i=1;i<=n;i++)
				sum=sum+a[1][i];
			for(int i=1;i<=m;i++)
				sum=sum+a[i][1];
			for(int i=1;i<=n;i++)
				sum=sum+a[m][i];
			for(int i=1;i<=m;i++)
				sum=sum+a[i][n];
			sum=sum-a[1][1]-a[1][n]-a[m][1]-a[m][n];
			cout<<sum<<endl;
			sum=0;
		}
	}
	return 0;
}
