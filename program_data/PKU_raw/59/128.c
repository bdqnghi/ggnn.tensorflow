int main()
{
	int room[101][101]={0},temp[101][101]={0},i=0,j=0,k=0,m=0,n=0,sum=0;
	char a='0';
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>a;
			switch(a)
			{
			case '.':room[i][j]=0;break;
			case '#':room[i][j]=-1;break;
			case '@':room[i][j]=1;break;
			}
		}
	cin>>m;
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
				for(j=1;j<=n;j++)
				{
					if(room[i][j]==k)
					{
						if(room[i-1][j]==0)room[i-1][j]=k+1;
						if(room[i][j-1]==0)room[i][j-1]=k+1;
						if(room[i+1][j]==0)room[i+1][j]=k+1;
						if(room[i][j+1]==0)room[i][j+1]=k+1;
					}
				}
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(room[i][j]>0)sum++;
		}
	cout<<sum;
	return 0;
}