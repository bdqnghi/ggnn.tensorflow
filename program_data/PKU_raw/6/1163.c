int main()
{
	int i,j,sum,m,n,k;		//k cases,m rows,n columns;
	int a[MAX_LEN][MAX_LEN];
	cin >> k;
	while (k--)
	{
		cin >> m >> n;
		for (i=0;i<m;i++)
			for (j=0;j<n;j++)
				cin >> a[i][j] ;
		for (sum=i=0;i<m;i++)				//the first column and the last column
			sum=sum+a[i][0]+a[i][n-1];
		for (j=1;j<n-1;j++)
			sum=sum+a[0][j]+a[m-1][j];		//the first row and the last row(not including corner)
		cout << sum << endl;
	}
	return 0;
}
