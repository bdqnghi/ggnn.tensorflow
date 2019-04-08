int main()
{
	int i,j,k;
	int x1,y1,x2,y2;
	scanf("%d %d",&x1,&y1);
	int a[x1][y1];
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)scanf("%d",&a[i][j]);
    }
    scanf("%d %d",&x2,&y2);
	int b[x2][y2];
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)scanf("%d",&b[i][j]);
    }
	int c[x1][y2];
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			int sum=0;
			for(k=0;k<y1;k++)sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2-1;j++)printf("%d ",c[i][j]);
		printf("%d\n",c[i][y2-1]);
	}
}