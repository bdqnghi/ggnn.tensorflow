
int main()
{
	char map[102][102]={0};
	int flag[102][102]={0};
	int n;
	cin>>n;
	int counter=0;

	for(int i=0;i!=n;i++)
	{
		for(int j=0;j!=n;j++)
		{
			cin>>map[i][j];
			if(map[i][j]=='@')
			{
				counter++;
				flag[i][j]=1;
			}
		}
	}

	int m;
	cin>>m;

	int sum=0;
	while(--m)
	{
		for(int i=0;i!=n;i++)
		{
			for(int j=0;j!=n;j++)
			{
				if(map[i][j]=='@'&&flag[i][j]==1)
				{
					if(map[i+1][j]=='.')
					{
						map[i+1][j]='@';
						sum++;
					}
					if(map[i][j+1]=='.')
					{
						map[i][j+1]='@';
						sum++;
					}
					if(map[i-1][j]=='.')
					{
						map[i-1][j]='@';
						sum++;
					}
					if(map[i][j-1]=='.')
					{
						map[i][j-1]='@';
						sum++;
					}
				}
			}
		}
		for(int i=0;i!=n;i++)
		{
			for(int j=0;j!=n;j++)
			{
				if(map[i][j]=='@')
					flag[i][j]=1;
			}
		}
	}
	cout<<sum+counter<<endl;
	return 0;
}