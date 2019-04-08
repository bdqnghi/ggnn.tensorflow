main()
{
	int x1,y1,x2,y2,i,j,k,m,n;
	scanf("%d %d",&x1,&y1);
	int a[x1][y1];
	for(m=0;m <x1;m++)
	{
		for(n=0;n<y1;n++)
			scanf("%d",&a[m][n]);
	}
	scanf("%d %d",&x2,&y2);
	int b[x2][y2];
	for(m=0;m <x2;m++)
	{
		for(n=0;n<y2;n++)
			scanf("%d",&b[m][n]);
	}
	int c[x1][y2];
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(k=0;k<y1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			printf("%d",c[i][j]);
			if(j<y2-1)
				printf(" ");
		}
		if(i<x1-1)
			printf("\n");
	}
}