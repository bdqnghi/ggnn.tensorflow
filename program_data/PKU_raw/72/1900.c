int main()
{
	int m,n;
	int i,j;
	int a[21][21];
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i>0&&a[i][j]>=a[i-1][j])||(i==0))
				if((i<m-1&&a[i][j]>=a[i+1][j])||(i==m-1))
					if((j>0&&a[i][j]>=a[i][j-1])||(j==0))
						if((j<n-1&&a[i][j]>=a[i][j+1])||(j==n-1))
							cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
}