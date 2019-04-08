int main()
{
	int a[100][100],sum[100]={0},i,j,l,k,m,n;
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>m>>n;
		for(j=0;j<m;j++)
		 for(l=0;l<n;l++)
		  cin>>a[j][l];
		for(j=0;j<n;j++)
		sum[i]=sum[i]+a[0][j];
		for(j=1;j<m;j++)
		{
			sum[i]=sum[i]+a[j][0];
			sum[i]=sum[i]+a[j][n-1];
		}
		for(j=1;j<n-1;j++)
		sum[i]=sum[i]+a[m-1][j];
	}
	for(i=0;i<k;i++)
	cout<<sum[i]<<endl;
	return 0;
}