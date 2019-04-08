void main()
{
	int m,n,i,j;
	int c[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&c[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0)
			{
				if(j==0)
				{
					if(c[i][j]>=c[i+1][j] && c[i][j]>=c[i][j+1])
						printf("%d %d\n",i,j);
				}
				else if(j==n-1)
				{
					if(c[i][j]>=c[i+1][j] && c[i][j]>=c[i][j-1])
						printf("%d %d\n",i,j);
				}
				else if(j>0 && j<n-1)
				{
					if(c[i][j]>=c[i][j-1] && c[i][j]>=c[i][j+1] && c[i][j]>=c[i+1][j])
						printf("%d %d\n",i,j);
				}
				
			}
			else if(i==m-1)
			{
				
				if(j>0 && j<n-1)
					if(c[i][j]>=c[i][j-1] && c[i][j]>=c[i][j+1] && c[i][j]>=c[i-1][j])
						printf("%d %d\n",i,j);
				if(j==0)
					if(c[i][j]>=c[i-1][j] && c[i][j]>=c[i][j+1])
						printf("%d %d\n",i,j);
				if(j==n-1)
					if(c[i][j]>=c[i-1][j] && c[i][j]>=c[i][j-1])
						printf("%d %d\n",i,j);
			}
			else if(i>0 && i<m-1)
			{
				if(j==0)
				{
					if(c[i][j]>=c[i][j+1] && c[i][j]>=c[i-1][j] && c[i][j]>=c[i+1][j])
						printf("%d %d\n",i,j);
				}
				else if(j>0 && j<n-1)
				{
					if(c[i][j]>=c[i][j-1] && c[i][j]>=c[i][j+1] && c[i][j]>=c[i-1][j] && c[i][j]>=c[i+1][j])
						printf("%d %d\n",i,j);
				}
				else if(j==n-1)
				{
					if(c[i][j]>=c[i-1][j] && c[i][j]>=c[i+1][j] && c[i][j]>=c[i][j-1])
						printf("%d %d\n",i,j);
				}
			}
		}
	}
}



