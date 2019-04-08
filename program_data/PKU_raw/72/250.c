int m,n;
int a[25][25];
int judge (int y, int x)
{
	if (y==0)
	{
		if (x==0)
		{
			if (a[x][y]>=a[x+1][y] && a[x][y]>=a[x][y+1])
				return 1;
		}
		else if (x==m-1)
		{
			if (a[x][y]>=a[x-1][y] && a[x][y]>=a[x][y+1])
				return 1;
		}
		else
		{
			if (a[x][y]>=a[x-1][y] && a[x][y]>=a[x+1][y] && a[x][y]>=a[x][y+1])
				return 1;
		}
	}
	else if (y==n-1)
	{
		if (x==0)
		{
			if (a[x][y]>=a[x+1][y] && a[x][y-1])
				return 1;
		}
		else if (x==m-1)
		{
			if (a[x][y]>=a[x-1][y] && a[x][y]>=a[x][y-1])
				return 1;
		}
		else
		{
			if (a[x][y]>=a[x-1][y] && a[x][y]>=a[x+1][y] && a[x][y]>=a[x][y-1])
				return 1;
		}
	}
	else
	{
		if (x==0)
		{
			if (a[x][y]>=a[x+1][y] && a[x][y]>=a[x][y+1] && a[x][y]>=a[x][y-1])
				return 1;
		}
		else if (x==m-1)
		{
			if (a[x][y]>=a[x-1][y] && a[x][y]>=a[x][y+1] && a[x][y]>=a[x][y-1])
				return 1;
		}
		else
		{
			if (a[x][y]>=a[x+1][y] && a[x][y]>=a[x-1][y] && a[x][y]>=a[x][y+1] && a[x][y]>=a[x][y-1])
				return 1;
		}
	}
	return 0;
}
main()
{

	scanf("%d %d",&m,&n);
	int i,j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
		{
			if (judge(j,i))
                printf("%d %d\n",i,j);
		}
}