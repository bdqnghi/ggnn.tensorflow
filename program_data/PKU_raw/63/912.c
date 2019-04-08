void main()
{
	int x1,y1,x2,y2,i,j,a[100][100],b[100][100],s;
	static int c[100][100];
	scanf("%d %d",&x1,&y1);
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y1-1;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&x2,&y2);
	for(i=0;i<=x2-1;i++)
	{
		for(j=0;j<=y2-1;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			for(s=0;s<=x2-1;s++)
				c[i][j]=a[i][s]*b[s][j]+c[i][j];
		}
	}
	for(i=0;i<=x1-1;i++)
	{
		printf("%d",c[i][0]);
		for(j=1;j<=y2-1;j++)
			printf(" %d",c[i][j]);
		printf("\n");
	}
}