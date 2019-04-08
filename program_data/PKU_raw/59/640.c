int main()
{
	int a[110][110];
	int i,j,k;
	for(i=0;i<110;i++)
	{
		for(j=0;j<110;j++)
			a[i][j]=-1;
	}
	int n,m;
	cin>>n;
	getchar();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			char x;
			x=getchar();
			if(x=='.')a[i][j]=0;
			if(x=='@')a[i][j]=1;
		}
		getchar();
	}
	cin>>m;//?????????-1????0??????????1
	if(m!=1)
	{
		for(k=2;k<=m;k++)
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(a[i][j]==k-1)
					{
						a[i][j]=k;
						if(a[i][j+1]==0)a[i][j+1]=k;
						if(a[i][j-1]==0)a[i][j-1]=k;
						if(a[i-1][j]==0)a[i-1][j]=k;
						if(a[i+1][j]==0)a[i+1][j]=k;//?????????????
					}
				}
			}
		}
	}
	int jishu=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==m)jishu++;
		}
		
	}
	cout<<jishu;



	return 0;
	
}