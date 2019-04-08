int main()
{
	int sz[100][100];
	int row,col,i,j,a=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}

	while(a<row-1&&a<col-1)
	{
		for(i=a,j=a;j<col-1;j++)
		{
			printf("%d\n",sz[i][j]);
		}
		for(j=col-1,i=a;i<row-1;i++)
		{

			printf("%d\n",sz[i][j]);
		}
		for(i=row-1,j=col-1;j>a;j--)
		{
			printf("%d\n",sz[i][j]);
		}
		for(j=a,i=row-1;i>a;i--)
		{
			printf("%d\n",sz[i][j]);
		}
		col--;
	    row--;
		a++;
	}
	if(a==row-1)
	{
		for(i=a,j=a;j<col;j++)
			printf("%d\n",sz[i][j]);
	}
	else if(a==col-1)
	{
		for(j=a,i=a;i<row;i++)
			printf("%d\n",sz[i][j]);
	}
	                                                                        
	return 0;
}