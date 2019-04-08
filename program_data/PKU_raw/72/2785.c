int main()
{
	int m,n;
	int a[22][22]={0},b[22][22]={0};
	int i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(b[i][j]<a[i-1][j])
				b[i][j]=a[i-1][j];
			if(b[i][j]<a[i+1][j])
				b[i][j]=a[i+1][j];
			if(b[i][j]<a[i][j-1])
				b[i][j]=a[i][j-1];
			if(b[i][j]<a[i][j+1])
				b[i][j]=a[i][j+1];
		}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(a[i+1][j+1]>=b[i+1][j+1])
				cout<<i<<" "<<j<<endl;
	return 0;
}