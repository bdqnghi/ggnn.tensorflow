void main()
{
	int i,j,k;
	int x1,y1;
	int x2,y2;
	int a[100][100],b[100][100];
	int c[100][100]={{0}};
	scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
			scanf("%d",&b[i][j]);
	}
	if(x2==y1)
	{
		for(i=0;i<x1;i++)
			for(j=0;j<y2;j++)
				for(k=0;k<y1;k++)
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2-1;j++)
		{
			printf("%d",c[i][j]);
			putchar(' ');
		}printf("%d\n",c[i][y2-1]);
	}
}