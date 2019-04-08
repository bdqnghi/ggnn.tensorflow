int main()
{
	int m,n;
	cin>>m>>n;
	int a[m+2][n+2];
	for(int i=0;i<m+2;i++)
		for(int j=0;j<n+2;j++)
		{
			if(i==0||i==m+1||j==0||j==n+1)
				a[i][j]=0;
			else cin>>a[i][j];
		}
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				cout<<i-1<<" "<<j-1<<endl;
		}
	return 0;

}
