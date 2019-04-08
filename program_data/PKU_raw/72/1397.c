int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int h[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>h[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i-1>=0&&j-1>=0&&i+1<m&&j+1<n)
			{
				if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(i==0&&j-1>=0&&j+1<n)
			{
				if(h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1]&&h[i][j]>=h[i+1][j])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(i==m-1&&j-1>=0&&j+1<n)
			{
				if(h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1]&&h[i][j]>=h[i-1][j])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(j==0&&i-1>=0&&i+1<m)
			{
				if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j+1])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(j==n-1&&i-1>=0&&i+1<m)
			{
				if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j-1])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(i==0&&j==0)
			{
				if(h[i][j]>=h[0][1]&&h[i][j]>=h[1][0])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(i==0&&j==n-1)
			{
				if(h[i][j]>=h[0][n-2]&&h[i][j]>=h[1][n-1])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(i==m-1&&j==0)
			{
				if(h[i][j]>=h[m-2][0]&&h[i][j]>=h[m-1][1])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
			else if(i==m-1&&j==n-1)
			{
				if(h[i][j]>=h[m-2][n-1]&&h[i][j]>=h[m-1][n-2])
				{
					cout<<i<<' '<<j<<endl;
				}
			}
		}
	}
	return 0;
}
