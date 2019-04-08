int n,m;
char c[110][110]={0};
int nextt[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
//. ???# ??@ ???& ????
void flu(int dep)
{
	int i,j,k;
	if (dep==m) return;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			if (c[i][j]=='@')
			{
				for (k=0;k<=3;k++)
				{
					int x,y;
					x=i+nextt[k][0];
					y=j+nextt[k][1];
					if (c[x][y]=='.')
					{
						c[x][y]='&';
					}
				}
			}
		}
    for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			if (c[i][j]=='&')
				c[i][j]='@';
	flu(dep+1);
}
int main()
{
	int i,j;
	cin >>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			cin >>c[i][j];
	cin >>m;
	flu(1);
	int total=0;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			if (c[i][j]=='@')
				total++;
		}
	cout <<total;
	return 0;
}