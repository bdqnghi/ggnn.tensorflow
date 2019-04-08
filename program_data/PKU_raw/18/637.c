int main()
{
	int nq,times,i,j,min,m;

	cin>>nq;
	const int n=nq;
	int sum[n];
	int a[n][n][n];
	for(times=0;times<n;times++)
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[times][i][j];//??n?????
	for(times=0;times<n;times++)
	{sum[times]=0;
		for(m=n;m>1;m--)

		{
		for(i=0;i<m;i++)

				{
				min=a[times][i][0];
				for(j=1;j<m;j++)
				if(a[times][i][j]<min)
				min=a[times][i][j];
				for(j=0;j<m;j++)
					a[times][i][j]-=min;

				}//????
		for(j=0;j<m;j++)
		{
			min=a[times][0][j];
			for(i=1;i<m;i++)
				if(a[times][i][j]<min)
				min=a[times][i][j];
			for(i=0;i<m;i++)
				a[times][i][j]-=min;
		}//????
	sum[times]+=a[times][1][1];
		for(i=2;i<m;i++)
			for(j=0;j<n;j++)
				a[times][i-1][j]=a[times][i][j];//?????
		for(i=2;i<m;i++)
			for(j=0;j<n-1;j++)
				a[times][j][i-1]=a[times][j][i];//?????
        }
	}
for(i=0;i<n;i++)
	cout<<sum[i]<<endl;
return 0;

}