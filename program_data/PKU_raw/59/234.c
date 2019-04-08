int main()
{
	char room[102][102],temp[102][102];//temp??????????
	int n,m,i,j,k,l=0;
	cin>>n;//????
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>room[i][j];
		}
	}
	cin>>m;
	for(k=1;k<m;k++)//??m-1?
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{temp[i][j]=room[i][j];}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(temp[i][j]=='@')//????
				{
					if(room[i-1][j]=='.'){room[i-1][j]='@';}
					if(room[i][j-1]=='.'){room[i][j-1]='@';}
					if(room[i][j+1]=='.'){room[i][j+1]='@';}
					if(room[i+1][j]=='.'){room[i+1][j]='@';}	
				}
			}
		}
	}
	for(i=1;i<=n;i++)//??????“@”
	{
		for(j=1;j<=n;j++)
		{
			if(room[i][j]=='@')
			{
					l++;
			}
		}
	}
	cout<<l<<endl;
	return 0;
}
