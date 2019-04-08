int main()
{
	int m,n,a[30][30]={0},x[100]={0},y[100]={0},count=0,i=0,j=0;
	cin>>m>>n;
	for(i=2;i<=m+1;i++)
		for(j=2;j<=n+1;j++)
			cin>>a[i][j];
	for(i=2;i<=m+1;i++)
	{
		for(j=2;j<=n+1;j++)
		{
			if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
			{
				count++;
				x[count]=i;
				y[count]=j;
			}
		}
	}
	for(i=1;i<=count-1;i++)
		cout<<x[i]-2<<" "<<y[i]-2<<endl;
	cout<<x[count]-2<<" "<<y[count]-2;
	return 0;
}
