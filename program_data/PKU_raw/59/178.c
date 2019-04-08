struct ro
{
int x;
int y;
int s;
}room[11111];
int main()
{
	int i,j,n,m,a[101][101]={0};
	int t=0,day=1,cu=0;
	char c[102][102]={0};
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>c[i][j];
			if(c[i][j]=='#')
				a[i][j]=9999;
			if(c[i][j]=='@')
			{
				a[i][j]=1;
				room[t].s=0;
				room[t].x=i;
				room[t].y=j;
				t++;
			}
		}
	cin>>m;
	if(t==0)
	{

		cout<<0;
		return 0;
	}
	while(1)
	{
		if(c[room[cu].x+1][room[cu].y]=='.'&&a[room[cu].x+1][room[cu].y]==0)
		{
			room[t].s=room[cu].s+1;
			a[room[cu].x+1][room[cu].y]=room[t].s;
			room[t].x=room[cu].x+1;
			room[t].y=room[cu].y;
			t++;
		}
		if(c[room[cu].x-1][room[cu].y]=='.'&&a[room[cu].x-1][room[cu].y]==0)
		{
			room[t].s=room[cu].s+1;
			a[room[cu].x-1][room[cu].y]=room[t].s;
			room[t].x=room[cu].x-1;
			room[t].y=room[cu].y;
			t++;
		}
		if(c[room[cu].x][room[cu].y+1]=='.'&&a[room[cu].x][room[cu].y+1]==0)
		{
			room[t].s=room[cu].s+1;
			a[room[cu].x][room[cu].y+1]=room[t].s;
			room[t].x=room[cu].x;
			room[t].y=room[cu].y+1;
			t++;
		}
		if(c[room[cu].x][room[cu].y-1]=='.'&&a[room[cu].x][room[cu].y-1]==0)
		{
			room[t].s=room[cu].s+1;
			a[room[cu].x][room[cu].y-1]=room[t].s;
			room[t].x=room[cu].x;
			room[t].y=room[cu].y-1;
			t++;
		}
		if(room[cu].s>m)
			break;
		if(cu>9999)
			break;
		cu++;
	}
	int sum=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]>=1&&a[i][j]<m)
				sum++;
	cout<<sum;
	return 0;
}