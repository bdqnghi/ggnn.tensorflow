int main()
{
	int a[100][100],b[100][100],c[100][100]={0};
	int n,x1,y1,x2,y2,x3,y3;
	scanf("%d %d",&x1,&y1);
	for(int i1=0;i1<=x1-1;i1++)
	{
		for(int i2=0;i2<=y1-1;i2++)
		{
			scanf("%d",&a[i1][i2]);
		}
	}
	scanf("%d %d",&x2,&y2);
	for(int i3=0;i3<=x2-1;i3++)
	{
		for(int i4=0;i4<=y2-1;i4++)
		{
			scanf("%d",&b[i3][i4]);
		}
	}
	for(int i=0;i<=x1-1;i++)
	{
		for(int j=0;j<=y2-1;j++)
		{
			for(int k=0;k<=x2-1;k++)
			{
				c[i][j]=a[i][k]*b[k][j]+c[i][j];
			}
		}
	}
	for(int q=0;q<=x1-1;q++)
	{
		for(int w=0;w<=y2-2;w++)
		{
			printf("%d ",c[q][w]);
		}
		printf("%d\n",c[q][y2-1]);
	}
	return 0;
}
