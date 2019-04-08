int main()
{	int i,j,m,n;
	cin>>m>>n;
	int a[m+1][n+1];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	int k;



	for(k=1;k<=n;k++)
		for(i=k;(i>=1)&&(k+1-i<=m);i--)
			cout<<a[k+1-i][i]<<endl;



	for(k=2;k<=m;k++)
		for(i=n;(i>=1)&&(k+n-i<=m);i--)
			cout<<a[k+n-i][i]<<endl;
return 0;

}