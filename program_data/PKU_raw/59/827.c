//shu ru fa huai le bu xie zhu shi le = =!
void f(char a[100][100],int);
void g(char a[100][100],int,int);
int n;
int main()
{
	int m;
	cin>>n;
	int i,j;
	char a[100][100];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>m;
	f(a,m);
	int t=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				t++;
		}
	}
	cout<<t;
	return 0;
}
int i,j;
void f(char a[100][100],int m)
{
	int d=0;
	int position[10000][2];
	if(m>1)
	{
		f(a,m-1);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{position[d][0]=i;position[d++][1]=j;}
			}
		}
		//cout<<d<<endl;
		for(i=0;i<d;i++)
		{
			g(a,position[i][0],position[i][1]);
		}
	}
}
void g(char a[100][100],int x,int y)
{
	if(x-1>=0)
	{
		if(a[x-1][y]=='.')
			a[x-1][y]='@';
	}
	if(x+1<n)
	{
		if(a[x+1][y]=='.')
			a[x+1][y]='@';
	}
	if(y-1>=0)
	{
		if(a[x][y-1]=='.')
			a[x][y-1]='@';
	}
	if(y+1<n)
	{
		if(a[x][y+1]=='.')
			a[x][y+1]='@';
	}
}
