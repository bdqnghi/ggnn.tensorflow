void main()
{
	int row,col,a[100][100],i,j,p,q,k;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(row<col)
		q=row;
	else
		q=col;
	p=(q+1)/2;
	if(row==col||q%2==0)
	{
		for(k=0;k<p;k++)
		{
		for(j=k;j<col-k;j++)
			printf("%d\n",a[k][j]);
		for(i=k+1;i<row-k;i++)
			printf("%d\n",a[i][col-1-k]);
		for(j=col-2-k;j>=k;j--)
			printf("%d\n",a[row-1-k][j]);
		for(i=row-2-k;i>k;i--)
			printf("%d\n",a[i][k]);
		}
	}
	if(row!=col&&q%2!=0)
	{
		if(col>row)
		{
			if(q==1)
			{
				for(j=0;j<col;j++)
					printf("%d\n",a[0][j]);
			}
			else 
			{
				for(k=0;k<p-1;k++)
				{
		          for(j=k;j<col-k;j++)
			        printf("%d\n",a[k][j]);
		          for(i=k+1;i<row-k;i++)
			        printf("%d\n",a[i][col-1-k]);
		          for(j=col-2-k;j>=k;j--)
			        printf("%d\n",a[row-1-k][j]);
		          for(i=row-2-k;i>k;i--)
			        printf("%d\n",a[i][k]);
				}
				for(j=p-1;j<col-p+1;j++)
					printf("%d\n",a[p-1][j]);
			}
		}
		if (row>col)
		{
			if(q==1)
			{
				for(i=0;i<row;i++)
					printf("%d\n",a[i][0]);
			}
			else
			{
				for(k=0;k<p-1;k++)
				{
		          for(j=k;j<col-k;j++)
			        printf("%d\n",a[k][j]);
		          for(i=k+1;i<row-k;i++)
			        printf("%d\n",a[i][col-1-k]);
		          for(j=col-2-k;j>=k;j--)
			        printf("%d\n",a[row-1-k][j]);
		          for(i=row-2-k;i>k;i--)
			        printf("%d\n",a[i][k]);
				}
				for(j=p-1;j<row-p+1;j++)
					printf("%d\n",a[j][p-1]);
			}
		}
	}
}





