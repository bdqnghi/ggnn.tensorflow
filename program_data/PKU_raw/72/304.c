int main()
{
	int m,n,i,j;
	int hill[21][21]={0};
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>hill[i][j];
		}
	}
    


	for(j=1;j<n-1;j++)
		if(hill[0][j]>=hill[0][j-1]&&hill[0][j]>=hill[0][j+1]&&hill[0][j]>=hill[1][j])


	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0&&j==0&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j+1])
			    cout<<i<<" "<<j<<endl;
			else if(i==0&&j<n-1&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j+1]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			else if(i==0&&j==n-1&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			else if(i>0&&i<m-1&&j==0&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
			else if(i==m-1&&j==0&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
			else if(i==m-1&&j<n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i][j-1]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
			else if(i==m-1&&j==n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			else if(i<m-1&&j==n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			
			
			else if(i>0&&i<m-1&&j>0&&j<n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j-1]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
		}
	}
	
	return 0;
}