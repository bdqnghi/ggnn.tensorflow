int main()
{
	int m,n;
	cin>>m>>n;
	int a[20][20];
	int x[400];
	int y[400];
	int t=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		    cin>>a[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0&&j==0)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(i==0&&j==n-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(i==m-1&&j==0)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
				{
					x[t]=i;
			     	y[t]=j;
					t++;
				}
			}
			if(i==m-1&&j==n-1)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(i==0&&j>0&&j<n-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(i==m-1&&j>0&&j<n-1)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(j==0&&i>0&&i<m-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(j==n-1&&i>0&&i<m-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
			if(j>0&&j<n-1&&i>0&&i<m-1)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
				{
					x[t]=i;
					y[t]=j;
					t++;
				}
			}
		}
	}
	for(int i=0;i<t;i++)
		cout<<x[i]<<' '<<y[i]<<endl;
	return 0;
}
