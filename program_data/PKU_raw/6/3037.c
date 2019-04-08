int main()
{
	int n,a[100][2],b[100][100],c[100]={0},i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
		for(j=0;j<a[i][0];j++)
		{
			for(k=0;k<a[i][1];k++)
			{
				scanf("%d",&b[j][k]);
			}
		}
		for(j=0;j<a[i][1];j++)
			c[i]=c[i]+b[0][j];
		for(j=0;j<a[i][1]&&a[i][0]!=1;j++)
			c[i]+=b[a[i][0]-1][j];
		for(j=1;j<a[i][0]-1;j++)
			c[i]=c[i]+b[j][0];
		for(j=1;j<a[i][0]-1&&a[i][1]!=1;j++)
			c[i]+=b[j][a[i][1]-1];
		for(j=0;j<100;j++)
		{
			for(k=0;k<100;k++)
			{
				b[j][k]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}