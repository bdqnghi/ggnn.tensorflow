void main()
{
	int i,j,m,n,a[30][30];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		if(i==0)
		{
			for(j=0;j<n;j++)
			{
				if(j==0)
				{
					if(a[0][0]>=a[0][1]&&a[0][0]>=a[1][0])
						printf("0 0\n");
				}
				else 
				{
					if(j==n-1)
						{
							if(a[0][n-1]>=a[0][n-2]&&a[0][n-1]>=a[1][n-1])
							printf("%d %d\n",i,j);
						}
					else
					{
						if(a[i][j]>=a[0][j-1]&&a[i][j]>=a[0][j+1]&&a[i][j]>=a[i+1][j])
						printf("%d %d\n",i,j);	
					}
				}
			}
		}
		else 
		{
			if(i<m-1)
			{
				for(j=0;j<n;j++)
				{
					if(j==0)
					{
						if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
						printf("%d %d\n",i,j);
					}
					else
					{
						if(j<n-1)
						{
							if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
							printf("%d %d\n",i,j);
						}
						else
						{
							if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
							printf("%d %d\n",i,j);
						}
					}
				}
			}
			else
			{	
				for(j=0;j<n;j++)
				{
					if(j==0)
					{
						if(a[i][0]>=a[i][1]&&a[i][0]>=a[i-1][0])
						printf("%d %d\n",i,j);
					}
					else
					{
						if(j==n-1)
						{
							if(a[i][n-1]>=a[i][n-2]&&a[i][n-1]>=a[i-1][n-1])
							printf("%d %d\n",i,j);
						}
						else
						{
							if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
							printf("%d %d\n",i,j);
						}
					}
				}
			}
		}
			}
		
}				