int main ()
{
	int a[30][30]={0},m=0,n=0;
	cin >> m >> n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			cin >> a[i][j];
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
		{
			if (i>=1&&a[i-1][j]>a[i][j]) continue;
			if (i<m-1&&a[i+1][j]>a[i][j]) continue;
			if (j>=1&&a[i][j-1]>a[i][j]) continue;
			if (j<n-1&&a[i][j+1]>a[i][j]) continue;
			cout <<i <<' ' <<j <<endl;
		}
		return 0;
}