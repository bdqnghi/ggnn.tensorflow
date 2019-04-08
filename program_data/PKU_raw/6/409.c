int sum(int a[100][100],int m,int n)
{
	int x=0,i;
	for(i=0;i<n;i++)
	{
		x=x+a[0][i]+a[m-1][i];
	}
	for(i=1;i<m-1;i++)
	{
		x=x+a[i][0]+a[i][n-1];
	}
	return x;
}
int main()
{
	int k,i;
	cin >>k;
	for(i=1;i<=k;i++)
	{
		int a[100][100]={0},m,n,j,k;
		cin >> m >> n;
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				cin >> a[j][k];
			}
		}
		cout <<sum(a,m,n) << endl;
	}
	return 0;
}