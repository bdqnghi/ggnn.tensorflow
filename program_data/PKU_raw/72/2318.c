int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int x[21][21];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>x[i][j];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==0)&&(j==0)&&(x[0][0]>=x[0][1])&&(x[0][0]>=x[1][0])) cout<<i<<" "<<j<<endl;
			else if((i==0)&&(j<n-1)&&(j>0)&&(x[i][j]>=x[i][j-1])&&(x[i][j]>=x[i+1][j])&&(x[i][j]>=x[i][j+1])) cout<<i<<" "<<j<<endl;
			else if((i==m-1)&&(j<n-1)&&(j>0)&&(x[i][j]>=x[i][j-1])&&(x[i][j]>=x[i][j+1])&&(x[i][j]>=x[i-1][j])) cout<<i<<" "<<j<<endl;
			else if((j==0)&&(i>0)&&(i<m-1)&&(x[i][j]>=x[i+1][j])&&(x[i][j]>=x[i][j+1])&&(x[i][j]>=x[i-1][j])) cout<<i<<" "<<j<<endl;
			else if((j==n-1)&&(i>0)&&(i<m-1)&&(x[i][j]>=x[i][j-1])&&(x[i][j]>=x[i-1][j])&&(x[i][j]>=x[i+1][j])) cout<<i<<" "<<j<<endl;
			else if((i==0)&&(j==n-1)&&(x[i][j]>=x[i][j-1])&&(x[i][j]>=x[i+1][j])) cout<<i<<" "<<j<<endl;
			else if((i==m-1)&&(j==0)&&(x[i][j]>=x[i-1][j])&&(x[i][j]>=x[i][j+1])) cout<<i<<" "<<j<<endl;
			else if((i==m-1)&&(j==n-1)&&(x[m-1][n-1]>=x[m-2][n-1])&&(x[m-1][n-1]>=x[m-1][n-2])) cout<<i<<" "<<j<<endl;
			else if((x[i][j]>=x[i+1][j])&&(x[i][j]>=x[i-1][j])&&(x[i][j]>=x[i][j-1])&&(x[i][j]>=x[i][j+1])) cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
}


