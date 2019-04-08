
const int N = 9;

int n,m;
int a[N+1][N+1];

void dfs(int x, int y, int s, int d)
{
	if (x<1 || x>N || y<0 || y>N) return;
	if (d==m)
	{
		a[x][y] += s;
		return;
	}
	dfs(x,y,s*2,d+1);
	for (int dx=-1;dx<=1;dx++)
		for (int dy=-1;dy<=1;dy++)
			if (dx!=0 || dy!=0)
				dfs(x+dx,y+dy,s,d+1);
}

int main()
{
	scanf("%d%d",&n,&m);
	memset(a,0,sizeof a);
	dfs(5,5,n,0);
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<N;j++) printf("%d ",a[i][j]);
		printf("%d\n",a[i][N]);
	}
	
	return 0;
}
