int main()
{
	int m,n;//m?n??????
	int map[20][20];
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>map[i][j];
		}
	}
	for(i=0;i<n;i++)//???0????
	{
		if(i==0)
		{
			if(map[0][i]>=map[0][i+1]&&map[0][i]>=map[1][i])
				cout<<"0"<<" "<<i<<endl;
		}
		else if(i==n-1)
		{
			if(map[0][i]>=map[0][i-1]&&map[0][i]>=map[1][i])
				cout<<"0"<<" "<<i<<endl;
		}
		else
		{
			if(map[0][i]>=map[0][i-1]&&map[0][i]>=map[0][i+1]&&map[0][i]>=map[1][i])
				cout<<"0"<<" "<<i<<endl;
		}
	}
	for(i=1;i<m-1;i++)//???1?m-2????
	{
		for(j=0;j<n;j++)
		{
			if(j==0)
			{
				if(map[i][j]>=map[i-1][j]&&map[i][j]>=map[i+1][j]&&map[i][j]>=map[i][j+1])
					cout<<i<<" "<<j<<endl;
			}
			else if(j==n-1)
			{
				if(map[i][j]>=map[i-1][j]&&map[i][j]>=map[i+1][j]&&map[i][j]>=map[i][j-1])
					cout<<i<<" "<<j<<endl;
			}
			else
			{
				if(map[i][j]>=map[i-1][j]&&map[i][j]>=map[i+1][j]&&map[i][j]>=map[i][j+1]&&map[i][j]>=map[i][j-1])
					cout<<i<<" "<<j<<endl;
			}
		}
	}
	for(i=0;i<n;i++)//???m-1????
	{
		if(i==0)
		{
			if(map[m-1][i]>=map[m-1][i+1]&&map[m-1][i]>=map[m-2][i])
				cout<<(m-1)<<" "<<i<<endl;
		}
		else if(i==n-1)
		{
			if(map[m-1][i]>=map[m-1][i-1]&&map[m-1][i]>=map[m-2][i])
				cout<<(m-1)<<" "<<i<<endl;
		}
		else
		{
			if(map[m-1][i]>=map[m-1][i-1]&&map[m-1][i]>=map[m-1][i+1]&&map[m-1][i]>=map[m-2][i])
				cout<<(m-1)<<" "<<i<<endl;
		}
	}
	return 0;
}