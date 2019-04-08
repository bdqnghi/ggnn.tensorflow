int main ()
{
	int a[10][11][11]={0};
	int m,n,j=0,k=0,i=0;
	cin>>m>>n;
	a[0][5][5]=m;
	for(j=1;j<n+1;j++)
		for(k=1;k<10;k++)
			for(i=1;i<10;i++)
			{
				a[j][k][i]=a[j-1][k-1][i-1]+a[j-1][k-1][i]+a[j-1][k-1][i+1]+a[j-1][k][i-1]+a[j-1][k][i+1]+a[j-1][k+1][i-1]+a[j-1][k+1][i]+a[j-1][k+1][i+1]+2*a[j-1][k][i];
			}
	for(j=1;j<10;j++)
		for(k=1;k<10;k++)
		{
			if(k==9)
				cout<<a[n][j][k]<<'\n';
			else
				cout<<a[n][j][k]<<' ';
		}
	return 0;
}
