void main()
{
	long a[101][101],b[101][101],c[101][101],m,n,x,y,i,j,k;
	scanf("%ld%ld",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%ld",&a[i][j]);
	}
	scanf("%ld%ld",&x,&y);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		   scanf("%ld",&b[i][j]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=y-1;j++)
		{
			c[i][j]=0;
			for(k=1;k<=n;k++)
				c[i][j]+=a[i][k]*b[k][j];
			printf("%ld ",c[i][j]);
		}
		for(k=1;k<=n;k++)
			c[i][y]+=a[i][k]*b[k][y];
		printf("%ld\n",c[i][y]);
	}
}