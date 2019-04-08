int main()
{
	char ch[110][110];
	memset(ch,'#',sizeof(ch));
	int n,m,count=0,i,j,flag[110][110];
	memset(flag,0,sizeof(flag));
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>ch[i][j];
		}
	cin>>m;
	while(m>1)
	{
		m--;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{
				if(ch[i][j]=='@' && flag[i][j]==0)
				{
					if(ch[i-1][j]=='.')
					{
						ch[i-1][j]='@';
						flag[i-1][j]=1;
					}
					if(ch[i+1][j]=='.') 
					{
						ch[i+1][j]='@';
						flag[i+1][j]=1;
					}
					if(ch[i][j-1]=='.')
					{
						ch[i][j-1]='@';
						flag[i][j-1]=1;
					}
					if(ch[i][j+1]=='.')
					{
						ch[i][j+1]='@';
						flag[i][j+1]=1;
					}
				}
			}
		memset(flag,0,sizeof(flag));
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			if(ch[i][j]=='@') count++;
		}
	cout<<count<<endl;
	return 0;

		
}





