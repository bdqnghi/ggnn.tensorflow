int main()
{
	int m,n,a[11][11][6]={0},i,j,k;
	cin>>m>>n;
	a[5][5][1]=m;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<10;j++)
		{
			for(k=1;k<10;k++)
			{
				a[j][k][i+1]=2*a[j][k][i]+a[j-1][k-1][i]+a[j-1][k][i]+a[j-1][k+1][i]+a[j][k-1][i]+a[j][k+1][i]+a[j+1][k-1][i]+a[j+1][k][i]+a[j+1][k+1][i];
			}
		}
	}
	for(j=1;j<10;j++)
	{
		for(k=1;k<9;k++)
		{
			cout<<a[j][k][n+1]<<" ";
		}
		cout<<a[j][9][n+1]<<endl;
	}
	return 0;
}