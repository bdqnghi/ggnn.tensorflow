int main()
{
	int m,n,a[22][22]={0},i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			cin>>a[i][j];
		a[i][0]=a[i][1];
		a[i][n+1]=a[i][n];
	}
	for(j=1;j<=n;j++)
	{
		a[0][j]=a[1][j];
		a[m+1][j]=a[m][j];
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				cout<<i-1<<" "<<j-1<<endl;
		}
	}
	return 0;
}