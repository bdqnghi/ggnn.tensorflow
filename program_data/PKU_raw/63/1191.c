int main()
{
	int a[111][111],b[111][111],c[111][111]={0},i,j,m,n,ax,ay,bx,by;
	scanf("%d%d",&ax,&ay);
	for(i=1;i<=ax;i++)
		for(j=1;j<=ay;j++)
		{
			scanf("%d",&a[i][j]);
		}
	scanf("%d%d",&bx,&by);
	for(i=1;i<=bx;i++)
		for(j=1;j<=by;j++)
		{
			scanf("%d",&b[i][j]);
		}
		for(m=1;m<=ax;m++)
			for(n=1;n<=by;n++)
		     for(i=1;i<=ay;i++)
			c[m][n]+=a[m][i]*b[i][n];
	for(m=1;m<=ax;m++)
	{
		printf("%d",c[m][1]);
		for(n=2;n<=by;n++)
		printf(" %d",c[m][n]);
                  printf("\n");
	}
	return 0;
}


