int main()
{
	char ch[101][101];
	int n;
	int num=0;
	int day[101][101];
	
	cin>>n;
	int i=0,j=0,k=0;
	for(i=0;i<n+2;i++)
		for(j=0;j<n+2;j++)
			day[i][j]=0;
	for(i=0;i<n+2;i++)\
	{
		ch[0][i]='#';
		ch[n+1][i]='#';
	}
	for(i=1;i<n+1;i++)
	{
		ch[i][0]='#';
		ch[i][n+1]='#';
	}
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>ch[i][j];
	for(i=0;i<=n+1;i++)
			for(j=0;j<=n+1;j++)
			{
				if(ch[i][j]=='@')
				{
					num++;
					day[i][j]=0;
				}
			}
	int m=0;
	cin>>m;
	for(k=1;k<m;k++)
	{
		for(i=1;i<n+1;i++)
			for(j=1;j<n+1;j++)
			{
				if(ch[i][j]=='@'&&day[i][j]<k)
				{
					if(ch[i+1][j]=='.')
					{
						ch[i+1][j]='@';
						day[i+1][j]=k;
						num++;
					}
					if(ch[i-1][j]=='.')
					{
						ch[i-1][j]='@';
						day[i-1][j]=k;
						num++;
					}
					if(ch[i][j+1]=='.')
					{
						ch[i][j+1]='@';num++;day[i][j+1]=k;
					}
					if(ch[i][j-1]=='.')
					{
						ch[i][j-1]='@';num++;day[i][j-1]=k; 
					}
				}
			}
	}
	cout<<num<<endl;
}