int main()
{
	int i,j,m,n,a[100][100]={0};
	cin >> m >> n;
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
			cin >> a[i][j];
	for(i=1;i<m+1;i++)
		for(j=1;j<n+1;j++)
			if(a[i][j+1]-a[i][j]<=0 && a[i+1][j]-a[i][j]<=0 && a[i-1][j]-a[i][j]<=0 && a[i][j-1]-a[i][j]<=0)
				cout << i-1 << " " << j-1 << endl;;
	return 0;
}