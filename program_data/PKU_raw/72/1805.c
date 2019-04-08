int main()
{
	int m,n;
	cin>>m>>n;
	int h[21][21];
	for(int i=1;i<m+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			cin>>h[i][j];
		}
	}
	for(int i=0;i<20;i++)
	{
		h[0][i]=0;
		h[i][0]=0;
		h[m+1][i]=0;
		h[i][n+1]=0;
	}
	for(int i=1;i<m+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			
			if(h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i-1][j])
			{
				cout<<i-1<<" "<<j-1<<endl;
			}
		}
	}


	return 0;
}