int main()
{
	int m,n,i,j;
	int a[20][20];
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i!=0&&i!=m-1&&j!=0&&j!=n-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			if(i==0&&j!=0&&j!=n-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			if(i==m-1&&j!=0&&j!=n-1)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			if(j==0&&i!=0&&i!=m-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			if(j==n-1&&i!=0&&i!=m-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
					cout<<i<<' '<<j<<endl;
			}
			if(i==0&&j==0)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			if(i==0&&j==n-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
					cout<<i<<' '<<j<<endl;
			}
			if(j==0&&i==m-1)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			if(j==n-1&&i==m-1)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
					cout<<i<<' '<<j<<endl;
			}
		}
	return 0;
}