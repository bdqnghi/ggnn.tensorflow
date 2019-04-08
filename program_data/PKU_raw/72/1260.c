int main()
{
	int m,n;
	cin>>m>>n;
	int i,j,a[22][22]={0},b[21][21]={0};
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)cin>>a[i][j];
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i-1][j] &&  a[i][j]>=a[i+1][j] &&  a[i][j]>=a[i][j+1] &&  a[i][j]>=a[i][j-1] )
				b[i-1][j-1]=2;

		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j]==2)cout<<i<<" "<<j<<endl;
		}
	}


	



	return 0;
}