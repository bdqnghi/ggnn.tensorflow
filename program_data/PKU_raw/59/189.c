int main()
{
	char map[100][100];
	int number[101][101],temp[101][101],n,i,j,t,m,count=0;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
		cin>>map[i];
	cin>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(map[i][j]=='@')
				number[i+1][j+1]=1;
			if(map[i][j]=='.')
				number[i+1][j+1]=0;
			if(map[i][j]=='#')
				number[i+1][j+1]=-1;
		}
	}
	for(t=0;t<m-1;t++)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				temp[i][j]=number[i][j];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(temp[i][j]==1)
				{
					if(temp[i+1][j]==0)
						number[i+1][j]=1;
					if(temp[i-1][j]==0)
						number[i-1][j]=1;
					if(temp[i][j+1]==0)
						number[i][j+1]=1;
					if(temp[i][j-1]==0)
						number[i][j-1]=1;
				}

			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(number[i][j]==1)
				count++;
		}
	}
	cout<<count;
	return 0;
}