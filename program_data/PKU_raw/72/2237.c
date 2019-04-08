int main()
{
	int m,n,i,j;
	int a[20][20];
	scanf("%d %d\n",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{

		if(i==0)
		{
			for(j=0;j<n;j++)
			{
			if(j==0)
			{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
				{
					printf("%d %d\n",i,j);
				}
			}
				else if(j==n-1)
				{
					if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])
					{
	                printf("%d %d\n",i,j);
					}
				}
				else
				{
					if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j])
					{
                    printf("%d %d\n",i,j);
					}
				}
			}
			}
			else if(i==m-1)
			{
				for(j=0;j<n;j++)
				{
				if(j==0)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
				{
					printf("%d %d\n",i,j);
				}
				}
				else if(j==n-1)
				{
					if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
					{
	                printf("%d %d\n",i,j);
					}
				}
				else
				{
                    if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1])
					{
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
						if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
						{
							printf("%d %d\n",i,j);
						}
					}
					else if(j==n-1)
					{
	                     if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
						 {
                          printf("%d %d\n",i,j);
						 }

					}
					else
					{

					if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j])
					{
                    printf("%d %d\n",i,j);
					}
					}
				}


			}
		}

	
		

	return 0;
}

