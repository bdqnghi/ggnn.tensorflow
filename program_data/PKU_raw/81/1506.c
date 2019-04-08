fanwei(int x,int y)
{
	int z=1;
	if (x*(x-4)>0)
	{
		z=0;
	}
	if (y*(y-4)>0)
	{
		z=0;
	}
	return(z);
}
void main()
{
	int a[5][5];
	int c[5];
	int m,n,i,j;
	for (i=0;i<=4;i++)
	{
		for (j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	if (fanwei(m,n)==0)
	{
		printf("error");
	}
	else if (fanwei(m,n)==1)
	{
		for (i=0;i<=4;i++)
		{
			c[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=c[i];
		}
		for (i=0;i<=4;i++)
		{
			for (j=0;j<=3;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d\n",a[i][4]);
		}
	}
}