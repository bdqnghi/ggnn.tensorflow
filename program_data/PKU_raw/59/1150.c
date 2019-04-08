char flu(char a)
{
	if(a=='.')
		return '!';
	else
		return a;
}//????
int change(char a[110][110],int m,int n)
{
	if(m>1)
	{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@')
			{
				 a[i][j+1]=flu(a[i][j+1]);
					 a[i][j-1]=flu(a[i][j-1]);
					 a[i+1][j]=flu(a[i+1][j]);
					 a[i-1][j]=flu(a[i-1][j]);
			}//??????????
		}
	}
	int x,y;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=n;y++)
		{
			if(a[x][y]=='!')
			{a[x][y]='@';}//?????????????
		}
	}
	}
	if(m==1)
	{return 0;}
	change(a,m-1,n);//?????
}
int main()
{
	int room,i,j,m,s=0;
	char a[110][110]={'\0'};
	cin>>room;
	for(i=1;i<=room;i++)
	{
		for(j=1;j<=room;j++)
		{
			cin>>a[i][j];//??
		}
	}
	cin>>m;
	change(a,m,room);
	for(i=1;i<=room;i++)
	{
		for(j=1;j<=room;j++)
		{
			if(a[i][j]=='@')
			{s++;}
		}
	}//????
	cout<<s;//??
	return 0;
}
