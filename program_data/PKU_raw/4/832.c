int main()
{
	int i,j,k,m,n;
	int a[100][100];
	cin>>n>>m;
	for (i=1;i<=n;i++)
	for (j=1;j<=m;j++)
		cin>>a[i][j];
    for (i=1;i<=m+n-1;i++)
		for (j=1;j<=n;j++)
	 {
		 if (i+1-j>0&&i+1-j<=m)//???????? 
		 cout<<*(*(a+j)+i+1-j)<<endl;
	 }
	return 0;
}
