int main()
{
	int m,n,i,j,h[30][30];
	float a;
	scanf("%d%d",&m,&n);
	for(i=0;i<n+2;i++)
		h[0][i]=h[m+1][i]=0;
	for(i=0;i<m+2;i++)
		h[i][0]=h[i][n+1]=0;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&h[i][j]);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1]&&h[i][j]>=h[i-1][j]&&h[i][j]>=h[i+1][j])
			printf("%d %d\n",i-1,j-1);
		}
}
