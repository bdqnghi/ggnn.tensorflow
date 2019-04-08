int main()
{
	char map[102][102]={0};
	int n,days,i,j,flag[102][102]={0},flaggy[102][102]={0},k=1,count=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>map[i][j];
			if(map[i][j]=='@')
			{
				flag[i][j]=1;
				flaggy[i][j]=1;
			}
		}
	}
	cin>>days;
	while(k<days)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(flag[i][j]==1)
				{
					if(map[i-1][j]=='.')
						flaggy[i-1][j]=1;
					if(map[i+1][j]=='.')
						flaggy[i+1][j]=1;
					if(map[i][j-1]=='.')
						flaggy[i][j-1]=1;
					if(map[i][j+1]=='.')
						flaggy[i][j+1]=1;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				flag[i][j]=flaggy[i][j];
			}
		}
		k++;
	}
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=n;j++)
			{
				if(flag[i][j]==1)
					count++;
			}
	}
	cout<<count<<endl;		


	return 0;
}

