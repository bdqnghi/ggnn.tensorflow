int main()
{
	int i,j,k,x1,x2,y1,y2;
	int a[200][200]={0},b[200][200]={0},c[200][200]={0};
	scanf("%d %d",&x1,&y1);
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y1-1;j++)scanf("%d",&a[i][j]);
	}
	scanf("%d %d",&x2,&y2);
	for(i=0;i<=x2-1;i++)
	{
		for(j=0;j<=y2-1;j++)scanf("%d",&b[i][j]);
	}
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			for(k=0;k<=y1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			if(j<y2-1)printf("%d ",c[i][j]);
			else printf("%d\n",c[i][j]);
		}
	}
	return 0;
}