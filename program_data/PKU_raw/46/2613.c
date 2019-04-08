
int main()
{
	int a[101][101],b[101][101]={0};
	int c[4]={-1,0,1,0},d[4]={0,1,0,-1};
	int m,n,i,j,x,y,t;
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++)
		for (j=1;j<=n;j++) 
		{
			scanf("%d",&a[i][j]);
			b[i][j]=1;
		}
	x=y=t=1;
	for (i=1;i<=m*n;i++)
	{
		printf("%d\n",a[x][y]);
		b[x][y]=0;
		if (!b[x+c[t]][y+d[t]]) t=(t+1)%4;
		x+=c[t];
		y+=d[t];
	}
	return 0;
}
