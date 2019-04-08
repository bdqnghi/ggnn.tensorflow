int main()
{
		int m,n,a[500][500];
		cin>>m>>n;

		for (int i=1;i<=m;i++)
				{ a[i][0]=-1000;a[i][n+1]=-1000;}
			for (int j=1;j<=n;j++)
    { a[0][j]=-1000;a[m+1][j]=-1000;}
		for (int i=1;i<=m;i++)
			for (int j=1;j<=n;j++)
				cin>>a[i][j];

		for (int i=1;i<=m;i++)
			for (int j=1;j<=n;j++)
				if
					(
				 (a[i][j]>=a[i-1][j])
					&&(a[i][j]>=a[i+1][j])
					&&(a[i][j]>=a[i][j-1])
					&&(a[i][j]>=a[i][j+1])
					)
					cout<<i-1<<' '<<j-1<<endl;
cin>>n;
}
