const int move[8]={-1,0,1,0,0,-1,0,1};
struct pnt{int x,y,day; }st[100050];
char map[128][128];
int ans,m,n;
int main()
{	int i,j,l=0,r=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			scanf(" %c",&map[i][j]); //????? 
			//printf("%c\n",map[i][j]); 
			if (map[i][j]=='@')
			{
				st[r].x=i;
				st[r].y=j;
				st[r].day=1;
				r++;
			}
		}
	scanf("%d",&m);
	ans=r;
	int xt, yt;
	while (r>l)
	{
		for (i=0;i<4;i++)
		{	xt=st[l].x+move[2*i]; yt=st[l].y+move[2*i+1];
			if (map[xt][yt]!='.') continue;
			ans++; map[xt][yt]='@';
			if (st[l].day==m-1) continue;
			st[r].x=xt;
			st[r].y=yt;
			st[r].day=st[l].day+1;
			r++;
		}
		l++;
	}
	printf("%d\n",ans);
	return 0;
}