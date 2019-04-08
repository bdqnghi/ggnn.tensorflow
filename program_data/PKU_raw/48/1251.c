int main()
{
	int a[10][10],b[10][10];
	int m,n;
	int i,j,d;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
		}
	}
	scanf("%d %d",&m,&n);
	a[5][5]=m;
	for(d=0;d<n;d++)
	{
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			b[i][j]=a[i][j];
		}
		for(i=5-d;i<=5+d;i++)
		{
			for(j=5-d;j<=5+d;j++)
			{
				a[i][j]=b[i][j]*2+a[i][j]-b[i][j];
				a[i-1][j-1]=b[i][j]+a[i-1][j-1];			
				a[i-1][j]=b[i][j]+a[i-1][j];
				a[i-1][j+1]=b[i][j]+a[i-1][j+1];
				a[i][j-1]=b[i][j]+a[i][j-1];
				a[i][j+1]=b[i][j]+a[i][j+1];
				a[i+1][j-1]=b[i][j]+a[i+1][j-1];
				a[i+1][j]=b[i][j]+a[i+1][j];
				a[i+1][j+1]=b[i][j]+a[i+1][j+1];
			}
		}
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<9;j++)
		printf("%d ",a[i][j]);
		printf("%d\n",a[i][9]);
	}
	return 0;
}
