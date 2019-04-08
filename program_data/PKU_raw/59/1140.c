int n,m;
char board[105][105];
int mark[105][105];
void f(int x)
{
	if(x==m)
		return;
	else
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(board[i][j]=='@'&&mark[i][j]!=x)
				{
					if(board[i][j-1]=='.' )
					{
						board[i][j-1]='@';
						mark[i][j-1]=x;
					}
					if(board[i][j+1]=='.')
					{
						board[i][j+1]='@';
						mark[i][j+1]=x;
					}
					if(board[i+1][j]=='.')
					{
						board[i+1][j]='@';
						mark[i+1][j]=x;
					}
					if(board[i-1][j]=='.')
					{
						board[i-1][j]='@';
						mark[i-1][j]=x;
					}
				}
			}
			f(x+1);
	}
}
int main()
{
	int sum=0;
	cin>>n;
	for(int i=1;i<=104;i++)
		for(int j=1;j<=104;j++)
			board[i][j]=='#';
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>board[i][j];
	cin>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(board[i][j]=='@')
				mark[i][j]=0;
			else
				mark[i][j]=-1;
		}
	if(m==1)
	{
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(board[i][j]=='@')
					sum++;
			}
		cout<<sum;
	}
	else
	{
		f(1);
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(board[i][j]=='@')
					sum++;
			}
			cout<<sum;
	}
	return 0;
}