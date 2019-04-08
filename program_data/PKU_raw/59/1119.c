int main()
{
	char room[101][101];
	int n,m,sum=0;
	int i,j,k;
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>room[i][j];
		}
	cin>>m;
	for(;m>1;m--)
	{
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(room[i][j]=='@')
				{
					for(k=0;k<4;k++)
					{
						if(room[i+dx[k]][j+dy[k]]=='.')
							room[i+dx[k]][j+dy[k]]='!';
					}
				}
			}
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(room[i][j]=='!')
					room[i][j]='@';
			}
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(room[i][j]=='@')
				sum++;
		}
	cout<<sum;
	return 0;
}
