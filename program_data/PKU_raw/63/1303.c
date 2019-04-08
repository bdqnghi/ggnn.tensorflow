int main()
{
	int a[101][101];
	int b[101][101];
	int c[101][101];
	int i,j,x1,y1,x2,y2,q;
	scanf("%d",&x1);
	scanf("%d",&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&x2);
	scanf("%d",&y2);
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
			c[i][j]=0;
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(q=0;q<x2;q++)
			{
				c[i][j]=c[i][j]+a[i][q]*b[q][j];
			}
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			if(j==y2-1)
				printf("%d\n",c[i][j]);
			else
				printf("%d ",c[i][j]);
		}
	}
	return 0;
}