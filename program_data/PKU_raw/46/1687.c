int a[999][999];
int f1(int x,int y);
int f2(int x,int y);
int f3(int x,int y);
int f4(int x,int y);
int main()
{
	int n,m,i,j;
for (i=0;i<=998;i++) for (j=0;j<=998;j++) a[i][j]=-9876;
	cin>>n>>m;
	for (i=1;i<=n;i++) for (j=1;j<=m;j++) cin >>a[i][j];
	f1(1,1);
	return 0;
}
int f1(int x,int y)
{
	cout<<a[x][y]<<endl;
	a[x][y]=-9876;
	while (1)
	{
		if (a[x][y+1]!=-9876)
		{
			y++;
			cout <<a[x][y]<<endl;
			a[x][y]=-9876;
		}
		else if (a[x+1][y]!=-9876) return (f2(x+1,y));
		else return 0;
	}
}
int f2(int x,int y)
{
	cout<<a[x][y]<<endl;
	a[x][y]=-9876;
	while (1)
	{
		if (a[x+1][y]!=-9876)
		{
			x++;
			cout <<a[x][y]<<endl;
			a[x][y]=-9876;
		}
		else if (a[x][y-1]!=-9876) return (f3(x,y-1));
		else return 0;
	}
}
int f3(int x,int y)
{
	cout<<a[x][y]<<endl;
	a[x][y]=-9876;
	while (1)
	{
		if (a[x][y-1]!=-9876)
		{
			y--;
			cout <<a[x][y]<<endl;
			a[x][y]=-9876;
		}
		else if (a[x-1][y]!=-9876) return (f4(x-1,y));
		else return 0;
	}
}
int f4(int x,int y)
{
	cout<<a[x][y]<<endl;
	a[x][y]=-9876;
	while (1)
	{
		if (a[x-1][y]!=-9876)
		{
			x--;
			cout <<a[x][y]<<endl;
			a[x][y]=-9876;
		}
		else if (a[x][y+1]!=-9876) return (f1(x,y+1));
		else return 0;
	}
}
