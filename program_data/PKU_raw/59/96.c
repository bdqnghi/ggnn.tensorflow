int main()
{
	int n,m,i,j,ans=0;
	int qx[10002],qy[10002];
	int h=0,t=0,tt=0;
	char map[102][102];
	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++) 
		{
			cin>>map[i][j];
			if (map[i][j]=='@')
			{
				ans++;
				qx[t]=i;
				qy[t++]=j;
				tt++;
			}
		}
	cin>>m;
	for (i=0;i<m-1;i++)
	{
		for (j=h;j<t;j++)
		{
			if (map[qx[j]+1][qy[j]]=='.') 
			{
				map[qx[j]+1][qy[j]]='@';
				ans++;
				qx[tt]=qx[j]+1;
				qy[tt]=qy[j];
				tt++;
			}
			if (map[qx[j]-1][qy[j]]=='.') 
			{
				map[qx[j]-1][qy[j]]='@';
				ans++;
				qx[tt]=qx[j]-1;
				qy[tt]=qy[j];
				tt++;
			}
			if (map[qx[j]][qy[j]+1]=='.') 
			{
				map[qx[j]][qy[j]+1]='@';
				ans++;
				qx[tt]=qx[j];
				qy[tt]=qy[j]+1;
				tt++;
			}
			if (map[qx[j]][qy[j]-1]=='.') 
			{
				map[qx[j]][qy[j]-1]='@';
				ans++;
				qx[tt]=qx[j];
				qy[tt]=qy[j]-1;
				tt++;
			}
		}
		h=t;t=tt;
	}
	cout<<ans<<endl;
	return 0;
}
