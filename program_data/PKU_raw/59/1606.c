

int main()
{
	int i,j,n,m,tx,ty;
	char a[100][100];
	cin>>n;
	int quex[100*100],quey[100*100],l=0,r=0,day=1,tempr;
	int vs[100][100]={0};
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='@')
			{
				quex[r]=i;
				quey[r]=j;
				r++;
				vs[i][j]=1;
			}
		}
		cin>>m;
		int dx[4],dy[4];
		dx[0]=-1;dx[1]=1;dx[2]=0;dx[3]=0;
		dy[0]=0;dy[1]=0;dy[2]=1;dy[3]=-1;
		tempr=r;

		while ((l!=r)&&(day<m))
		{
			day++;
			for (i=l;i<tempr;i++)
			{
				tx=quex[i];
				ty=quey[i];
				l++;
				for (j=0;j<4;j++)
					if ((tx+dx[j]>=0)&&(tx+dx[j]<n)&&(ty+dy[j]>=0)&&(ty+dy[j]<n))
					{
						if ((a[tx+dx[j]][ty+dy[j]]=='.')&&(vs[tx+dx[j]][ty+dy[j]]==0))
						{
							quex[r]=tx+dx[j];
							quey[r]=ty+dy[j];
							r++;
							vs[tx+dx[j]][ty+dy[j]]=1;
						}
					}
			}
			tempr=r;
		}
		cout<<r;
		return 0;
}
