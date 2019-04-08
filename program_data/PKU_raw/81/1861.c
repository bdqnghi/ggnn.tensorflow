void main()
{
	int a[5][5];
	int z[5],x[5];
	int i,j;
	int n,m;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if (n<5 && m<5)
	{
		for (j=0;j<5;j++)
		{
			z[j]=a[n][j];
			x[j]=a[m][j];
			a[n][j]=x[j];
			a[m][j]=z[j];
		}
		for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][4]);
		}
	}
	else 
	{
		printf("error\n");
	}
}
