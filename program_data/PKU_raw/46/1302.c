int main()
{
	int row,col,row1,row2,col1,col2,array[100][100],i,j,i1,i2,j1,j2;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&(array[i][j]));
		}
	}
	col1=0;
	col2=col-1;
	row1=0;
	row2=row-1;
	while((row2-row1>0)&&(col2-col1>0))
	{
		for(i1=col1;i1<col2;i1++)
			printf("%d\n",array[row1][i1]);
		for(j1=row1;j1<row2;j1++)
			printf("%d\n",array[j1][col2]);
		for(i2=col2;i2>col1;i2--)
			printf("%d\n",array[row2][i2]);
		for(j2=row2;j2>row1;j2--)
			printf("%d\n",array[j2][col1]);
		col1++;
		col2--;
		row1++;
		row2--;
	}
	if((row2-row1==0)&&(col2-col1!=0))
	{
		for(i=col1;i<=col2;i++)
		{
			printf("%d\n",array[row1][i]);
		}
	}
	if((col2-col1==0)&&(row2-row1!=0))
	{
		for(j=row1;j<=row2;j++)
		{
			printf("%d\n",array[j][col1]);
		}
	}
	if((col2-col1==0)&&(row2-row1==0))
		printf("%d\n",array[row1][col1]);
	return 0;
}

			