int main()
{
	int i,j,row,col,row0=0,col0=0;
	int a[200][200];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	while(row0>=0)
	{
		if(row0+1==row)
		{
			for(i=col0;i<col;i++)
				printf("%d\n",a[row0][i]);
		    break;
		}
		if(col0+1==col)
		{
			for(i=row0;i<row;i++)
				printf("%d\n",a[i][col0]);
			break;
		}
        if(row0+1==row&&col0+1==col)
		{
			printf("%d\n",a[row0][col0]);
			break;
		}
		for(i=col0;i<col;i++)
			printf("%d\n",a[row0][i]);
		for(i=row0+1;i<row;i++)
			printf("%d\n",a[i][col-1]);
		for(i=col-2;i>=col0;i--)
			printf("%d\n",a[row-1][i]);
		for(i=row-2;i>=row0+1;i--)
			printf("%d\n",a[i][col0]);
		row0++;
		col0++;
		row--;
		col--;
		if(row0>row-1||col0>col-1)
			break;
		
	}
	return 0;
}









