



int main()
{
	int m,k;

	int n;

	int l;

	int i,j;

	int temp;


	int count=0;

	char s[102][102];
	int sta[102][102];

	int flag[102][101];

	int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};

	memset(flag,0,sizeof(flag));
	


	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>s[i][j];
			if(s[i][j]=='#')
			{
				sta[i][j]=0;
			}
			if(s[i][j]=='.')
			{
				sta[i][j]=1;
			}
			if(s[i][j]=='@')
			{
				sta[i][j]=2;
			}

		}
		cin.get();
	}
	cin>>m;
	for(k=1;k<=m-1;k++)
	{
		memset(flag,0,sizeof(flag));
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sta[i][j]==2 && flag[i][j]==0)
			{
				for(l=0;l<=3;l++)
				{
					if(i+dir[l][0]<=n && i+dir[l][0]>=1 && j+dir[l][1]<=n && j+dir[l][1]>=1)
					{

					if(sta[i+dir[l][0]][j+dir[l][1]]==1)
					{
						sta[i+dir[l][0]][j+dir[l][1]]=2;
						flag[i+dir[l][0]][j+dir[l][1]]=1;
					}
					}
				}
			}
		}
		}
	}


	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(sta[i][j]==2)
			{
				count++;
			}
		}
	}
	cout<<count<<endl;













		










		
	
	
	
	
	




	return 0;
}