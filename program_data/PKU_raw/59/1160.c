char room[100][100];
int n;
void dg(int m)        //???m?
{
	if(m>1)
	{
		dg(m-1);      //?????????
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(room[i][j]=='@')   //??
				{
					if(room[i-1][j]=='.') room[i-1][j]='*';
					if(room[i+1][j]=='.') room[i+1][j]='*';
					if(room[i][j-1]=='.') room[i][j-1]='*';
					if(room[i][j+1]=='.') room[i][j+1]='*';
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(room[i][j]=='*')
				{
					room[i][j]='@';   //??????????
				}
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>room[i][j];    //???????
		}
	}
	int m;
	cin>>m;
	dg(m);
	int p=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(room[i][j]=='@')  //????????
				p++;
		}
	}
	cout<<p<<endl;    //????
	return 0;
}