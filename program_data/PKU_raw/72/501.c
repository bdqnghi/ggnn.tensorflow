int main()
{
	int n,m,i,j,k,l,sum=0;
	cin>>m>>n;
	int a[1000][1000];
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
		    if(i==0)
			{
				if(j==0 && a[i][j]>=a[i][j+1] && a[i][j]>=a[i+1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
				else if(j==n-1 && a[i][j]>=a[i][j-1] && a[i][j]>=a[i+1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
				else if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i][j+1])
				{
					cout<<i<<" "<<j<<endl;
				}
			}
			else if(i>0 && i<m-1)
			{
				if(j==0 && a[i][j]>=a[i][j+1] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i-1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
				else if(j==n-1 && a[i][j]>=a[i][j-1] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i-1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
				else if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
			}
			else if(i==m-1)
			{
				if(j==0 && a[i][j]>=a[i][j+1] && a[i][j]>=a[i-1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
				else if(j==n-1 && a[i][j]>=a[i][j-1] && a[i][j]>=a[i-1][j])
				{
					cout<<i<<" "<<j<<endl;
				}
				else if(a[i][j]>=a[i][j-1] && a[i][j]>=a[i-1][j] && a[i][j]>=a[i][j+1])
				{
					cout<<i<<" "<<j<<endl;
				}
			}
		}
	}
}

