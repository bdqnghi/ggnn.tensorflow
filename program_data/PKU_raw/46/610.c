void main()
{
	int array[200][200]={0};
	int r,c;
	int i,j;
	int k=0,l=0;
	
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			scanf("%d",&array[i][j]);
		}

	if (r%2==0&&c%2==0)
	{
		for(k=0;k<r/2;k++)
		{	
			for(j=k;j<c-1-k;j++)
				printf("%d\n",array[k][j]);
			for(i=k;i<r-1-k&&k<c-1-k;i++)
				printf("%d\n",array[i][c-1-k]);
			for(j=c-1-k;j>k;j--)
				printf("%d\n",array[r-1-k][j]);
			for(i=r-1-k;i>k&&c-1-k>k;i--)
				printf("%d\n",array[i][k]);
		}
	}
	else if (r%2!=0&&c%2==0)
	{
		for(k=0;k<r/2;k++)
		{	
			for(j=k;j<c-1-k;j++)
				printf("%d\n",array[k][j]);
			for(i=k;i<r-1-k&&k<c-1-k;i++)
				printf("%d\n",array[i][c-1-k]);
			for(j=c-1-k;j>k;j--)
				printf("%d\n",array[r-1-k][j]);
			for(i=r-1-k;i>k&&c-1-k>k;i--)
				printf("%d\n",array[i][k]);
		}
		for(j=k;j<=c-1-k;j++)
			printf("%d\n",array[r/2][j]);
		
	}
	else if (r%2==0&&c%2!=0)
	{
    	for(k=0;k<r/2;k++)
		{	
		for(j=k;j<c-1-k;j++)
		    printf("%d\n",array[k][j]);
		for(i=k;i<r-1-k&&k<c-1-k;i++)
			printf("%d\n",array[i][c-1-k]);
		for(j=c-1-k;j>k;j--)
			printf("%d\n",array[r-1-k][j]);
		for(i=r-1-k;i>k&&c-1-k>k;i--)
		{
			printf("%d\n",array[i][k]);
			l=k+1;
		}
		}
		for(i=c-1-l;i<=r-1-l;i++)
			printf("%d\n",array[i][c/2]);
		
	}
	else //if (r%2!=0&&c%2!=0)
	{
	    for(k=0;k<r/2;k++)
		{
			for(j=k;j<c-1-k;j++)
				printf("%d\n",array[k][j]);
			for(i=k;i<r-1-k&&k<c-1-k;i++)
				printf("%d\n",array[i][c-1-k]);
			for(j=c-1-k;j>k;j--)
				printf("%d\n",array[r-1-k][j]);
			for(i=r-1-k;i>k&&c-1-k>k;i--)
			{
				printf("%d\n",array[i][k]);
				l=k+1;
			}
		}
	    if(r>=c)
		{
			for(i=l;i<=r-1-l;i++)
				printf("%d\n",array[i][c/2]);
		}
		else
		{
            for(j=k;j<=c-1-k;j++)
			printf("%d\n",array[r/2][j]);
		}
		
	}

    
}
