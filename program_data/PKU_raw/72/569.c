int main()
{
    int m,n,a[20][20],i,k;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[i][k]);	
	}
    }
	for(i=0;i<m;i++)
    {
	for(k=0;k<n;k++)
	{
		if(i==0)
		{
		if(k==0&&(a[i][k]>=a[i+1][k])&&(a[i][k]>=a[i][k+1]))
		printf("%d %d\n",i,k);
		else {
			if (k<n-1)
			{
				if((a[i][k]>=a[i+1][k])&&(a[i][k]>=a[i][k+1])&&(a[i][k]>=a[i][k-1]))	
				{
					printf("%d %d\n",i,k);	
				}
			}
			if(k==n-1&&(a[i][k]>=a[i+1][k])&&(a[i][k]>=a[i][k-1]))
				printf("%d %d\n",i,k);	
			}					
		}
	 	else {
			if (i>0&&i<m-1)
				{
					 if(k==0)
					 {
					if((a[i][k]>=a[i+1][k])&&(a[i][k]>=a[i-1][k])&&(a[i][k]>=a[i][k+1]))
					printf("%d %d\n",i,k);	
					}
					if(k==n-1)
					{
					if((a[i][k]>=a[i+1][k])&&(a[i][k]>=a[i-1][k])&&(a[i][k]>=a[i][k-1]))
					printf("%d %d\n",i,k);		
					}
					
					 if(k>0&&k<n-1)
					 {
						 if((a[i][k]>=a[i+1][k])&&(a[i][k]>=a[i-1][k])&&(a[i][k]>=a[i][k+1])&&(a[i][k]>=a[i][k-1]))
						{
							     printf("%d %d\n",i,k);	
						}
					 }
				}
				else if(i==m-1)
				{
				if(k==0&&(a[i][k]>=a[i-1][k])&&(a[i][k]>=a[i][k+1]))
		printf("%d %d\n",i,k);
		else {
			if (k<n-1)
			{
				if((a[i][k]>=a[i-1][k])&&(a[i][k]>=a[i][k+1])&&(a[i][k]>=a[i][k-1]))	
				{
					printf("%d %d\n",i,k);	
				}
			}
			if(k==n-1&&(a[i][k]>=a[i-1][k])&&(a[i][k]>=a[i][k-1]))
				printf("%d %d\n",i,k);	
			}		
				}
				
			}
    }
}
     return 0;
} 
