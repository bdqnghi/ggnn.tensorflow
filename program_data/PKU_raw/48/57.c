

void xijun(int a[5][11][11],int x,int n)
{
	int i,j,k;

	for(i=1;i<=n;i++)
	{

	
		for(j=1;j<10;j++)
		{
			for(k=1;k<10;k++)
			{
				a[i][j][k]=2*(a[i-1][j][k])+a[i-1][j-1][k-1]+a[i-1][j-1][k]+a[i-1][j-1][k+1]+a[i-1][j][k-1]+a[i-1][j][k+1]+a[i-1][j+1][k-1]+a[i-1][j+1][k]+a[i-1][j+1][k+1];
			}
		}
	}
}
void main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int a[5][11][11]={0};
	a[0][5][5]=m;
	xijun (a,m,n);
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j==9)
			{
				printf("%d\n",a[n][i][j]);
				continue;
			}
			printf("%d ",a[n][i][j]);
		}
	}
}