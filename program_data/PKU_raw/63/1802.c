int main()
{
	int a[110][110],b[110][110],c[110][110],x1,y1,x2,y2,i,j,n=0,m;
	scanf("%d %d",&x1,&y1);
	for(i=1;i<=x1;i++)
	{
		scanf("%d",&a[i][1]);
		for(j=2;j<=y1;j++)
		{
			scanf(" %d",&a[i][j]);
		}
	}
	scanf("%d %d",&x2,&y2);
	for(i=1;i<=x2;i++)
	{
		scanf("%d",&b[i][1]);
		for(j=2;j<=y2;j++)
		{
			scanf(" %d",&b[i][j]);
		}
	}
	for(i=1;i<=x1;i++)
	{
		for(j=1;j<=y2;j++)
		{
			n=0;
			for(m=1;m<=y1;m++)
			{
				n=n+a[i][m]*b[m][j];
			}
			c[i][j]=n;
		}
	}
	for(i=1;i<=x1;i++)
	{
		printf("%d",c[i][1]);
		for(j=2;j<=y2;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
}