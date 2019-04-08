int main()
{
	int row,col,matrix[ROW][COL],k[100000];
	int i,j,a=0;

	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int xx_row,sx_row,xx_col,sx_col;
    xx_row=0;
    sx_row=row-1;
    xx_col=0;
    sx_col=col-1;
    while((xx_row<=sx_row)&&(xx_col<=sx_col)){
		if((xx_row==sx_row)&&(xx_col==sx_col)){
			k[a]=matrix[xx_row][xx_col];
			a++;
		}
		for(j=xx_col;j<sx_col;j++){
			k[a]=matrix[xx_row][j];
			a++;
		}
		for(i=xx_row;i<sx_row;i++){
			k[a]=matrix[i][sx_col];
			a++;
		}
		for(j=sx_col;j>xx_col;j--){
			k[a]=matrix[sx_row][j];
			a++;
		}
		for(i=sx_row;i>xx_row;i--){
			k[a]=matrix[i][xx_col];
			a++;
		}
		xx_row++;
    	sx_row--;
        xx_col++;
        sx_col--;
	}
	for(i=0;i<row*col;i++)
	{
		printf("%d\n",k[i]);
	}
	return 0;
}


