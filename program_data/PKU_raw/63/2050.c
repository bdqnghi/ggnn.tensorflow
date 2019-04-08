main()
{
	int x1,y1,x2,y2,i,j,k;
	scanf("%d %d",&x1,&y1);
	int a[x1][y1];
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y1-1;j++)
		scanf("%d",&a[i][j]);
	} 
	scanf("%d %d",&x2,&y2);
	int b[x2][y2];
	for(i=0;i<=x2-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		scanf("%d",&b[i][j]);
	} 
	int c[x1][y2];
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			c[i][j]=0;
			for(k=0;k<=y1-1;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			if(j!=y2-1)
			printf("%d ",c[i][j]);
			else if(j==y2-1&&i!=x1-1)
			printf("%d\n",c[i][j]);
			else if(j==y2-1&&i==x1-1)
			printf("%d",c[i][j]);
		}
	}
} 