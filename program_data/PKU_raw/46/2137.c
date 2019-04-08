void main()
{
	int a[100][100];
	int row,col,i,j;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	int s_row=0,s_col=0,e_row=row-1,e_col=col-1;
	while(1)
	{
		if (s_row>e_row)
			break;
		for (i=s_col;i<=e_col;i++)
			printf("%d\n",a[s_row][i]);
		s_row++;
		if (s_col>e_col)
			break;
		for (i=s_row;i<=e_row;i++)
			printf("%d\n",a[i][e_col]);
		e_col--;
		if (s_row>e_row)
			break;
		for (i=e_col;i>=s_col;i--)
			printf("%d\n",a[e_row][i]);
		e_row--;
		if (s_col>e_col)
			break;
		for (i=e_row;i>=s_row;i--)
			printf("%d\n",a[i][s_col]);
		s_col++;
	}
}