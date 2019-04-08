

int main()
{
	int n,m;
	int a[110][110];
	cin>>n>>m;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			cin>>a[i][j];
	for (int j=0;j<m+n-1;j++)
		for (int i=max(0,j-m+1);i<min(n,j+1);i++)
			cout<<a[i][j-i]<<endl;
	return 0;
}