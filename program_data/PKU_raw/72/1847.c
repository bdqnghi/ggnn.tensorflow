int main()
{
	int m,n,a[40][40];
	cin>>m>>n;
	for(int i=0;i<=m+1;i++)
		for(int j=0;j<=n+1;j++)
			a[i][j]=0;
	for(int i=1;i<m+1;i++)
		for(int j=1;j<n+1;j++)
			cin>>a[i][j];
	for(int i=1;i<m+1;i++)
		for(int j=1;j<n+1;j++)
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
				cout<<i-1<<" "<<j-1<<endl;
	return 0;
}