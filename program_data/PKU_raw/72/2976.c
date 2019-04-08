
int main(){
	int m,n;
	cin>>m>>n;
	int high[21][21];
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>high[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==0&&j==0)
			{
				if(high[i][j]>=high[i][j+1]&&high[i][j]>=high[i+1][j])
					cout<<i<<' '<<j<<endl;
			}
		    else if(i==0&&j==n-1)
			{
				if(high[i][j]>=high[i+1][j]&&high[i][j]>=high[i][j-1])
					cout<<i<<' '<<j<<endl;
			}
			else if(i==m-1&&j==n-1)
			{
				if(high[i][j]>=high[i-1][j]&&high[i][j]>=high[i][j-1])
					cout<<i<<' '<<j<<endl;
			}
			else if(i==m-1&&j==0)
			{
				if(high[i][j]>=high[i-1][j]&&high[i][j]>=high[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			else if(i==0&&j>0&&j<n-1)
			{
				if(high[i][j]>=high[i+1][j]&&high[i][j]>=high[i][j-1]&&high[i][j]>=high[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			else if(i==m-1&&j>0&&j<n-1)
			{
                if(high[i][j]>=high[i-1][j]&&high[i][j]>=high[i][j-1]&&high[i][j]>=high[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			else if(i>0&&i<m-1&&j==0)
			{
				if(high[i][j]>=high[i+1][j]&&high[i][j]>=high[i-1][j]&&high[i][j]>=high[i][j+1])
					cout<<i<<' '<<j<<endl;
			}
			else if(i>0&&i<m-1&&j==n-1)
			{
				if(high[i][j]>=high[i+1][j]&&high[i][j]>=high[i-1][j]&&high[i][j]>=high[i][j-1])
					cout<<i<<' '<<j<<endl;
			}
			else
				if(high[i][j]>=high[i+1][j]&&high[i][j]>=high[i-1][j]&&high[i][j]>=high[i][j-1]&&high[i][j]>=high[i][j+1])
					cout<<i<<' '<<j<<endl;
		}
		return 0;
}

