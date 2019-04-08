
void main()
{
	int n,m,i,j,x,y,pos;
	int p[200][200]={0};
	int a[200][200];
	int f[10][2];
	f[0][0]=0; f[0][1]=1;
	f[1][0]=1; f[1][1]=0;
	f[2][0]=0; f[2][1]=-1;
	f[3][0]=-1; f[3][1]=0;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++)
		for (j=1;j<=m;j++)
		{
			p[i][j]=1;
			scanf("%d",&a[i][j]);
		}
	x=1; y=1; pos=0;
	for (i=1;i<=n*m;i++)
	{
		printf("%d\n",a[x][y]);
		p[x][y]=0;
		if (!p[x+f[pos][0]][y+f[pos][1]])
		  pos=(pos+1)%4;	
		x=x+f[pos][0];
		y=y+f[pos][1];
	}
}