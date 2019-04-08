int main()
{
	int n,m,i,j;
	int point[20][20];
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			scanf("%d",&point[i][j]);
		}
	}
	for (i=0;;)
	{
		for (j=0;;)
		{
			if (point[0][0]>=point[0][1]&&point[0][0]>=point[1][0])
			{
				printf("0 0\n");
			}
			break;
		}
		for (j=1;j<m-1;j++)
		{
			if (point[0][j]>=point[0][j-1]&&point[0][j]>=point[0][j+1]&&point[0][j]>=point[1][j])
			{
				printf("0 %d\n",j);
			}
		}
		for (j=m-1;;)
		{
			if(point[0][m-1]>=point[0][m-2]&&point[0][m-1]>=point[1][m-1])
			{
				printf("0 %d\n",m-1);
			}
			break;
		}
		break;
	}
	for (i=1;i<n-1;i++)
	{
		for (j=0;;)
		{
			if(point[i][0]>=point[i][1]&&point[i][0]>=point[i-1][0]&&point[i][0]>=point[i+1][0])
			{
				printf("%d 0\n",i);
			}
			break;
		}
		for (j=1;j<m-1;j++)
		{
			if (point[i][j]>=point[i-1][j]&&point[i][j]>=point[i][j-1]&&point[i][j]>=point[i+1][j]&&point[i][j]>=point[i][j+1])
			{
				printf("%d %d\n",i,j);
			}
		}
		for (j=m-1;;)
		{
			if (point[i][m-1]>=point[i][m-2]&&point[i][m-1]>=point[i-1][m-1]&&point[i][m-1]>=point[i+1][m-1])
			{
				printf("%d %d\n",i,m-1);
			}
			break;
		}
	}
	for (i=n-1;;)
	{
		for (j=0;;)
		{
			if (point[n-1][0]>=point[n-1][1]&&point[n-1][0]>=point[n-2][0])
			{
				printf("%d 0\n",n-1);
			}
			break;
		}
		for (j=1;j<m-1;j++)
		{
			if (point[n-1][j]>=point[n-1][j-1]&&point[n-1][j]>=point[n-1][j+1]&&point[n-1][j]>=point[n-2][j])
			{
				printf("%d %d\n",n-1,j);
			}
		}
		for (j=m-1;;)
		{
			if(point[n-1][m-1]>=point[n-1][m-2]&&point[n-1][m-1]>=point[n-2][m-1])
			{
				printf("%d %d\n",n-1,m-1);
			}
			break;
		}
		break;
	}
	return 0;
}