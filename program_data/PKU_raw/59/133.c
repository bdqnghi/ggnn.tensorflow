
char room[102][102],temp[102][102];
int n;

void test()
{
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			temp[i][j]=room[i][j];
		}
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (room[i][j]=='@')
			{
				if (room[i-1][j]=='.') temp[i-1][j]='@';
				if (room[i+1][j]=='.') temp[i+1][j]='@';
				if (room[i][j-1]=='.') temp[i][j-1]='@';
				if (room[i][j+1]=='.') temp[i][j+1]='@';
			}
		}
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			room[i][j]=temp[i][j];
		}
	}
}

int main()
{
	cin>>n;
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			cin>>room[i][j];
		}
	}
	int m;cin>>m;
	for (i=2;i<=m;i++) test();

	int counter=0;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (room[i][j]=='@') counter++;
		}
	}
	cout<<counter;
	return 0;
}
