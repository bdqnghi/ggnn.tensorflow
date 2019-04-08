int main()
{
	int row,col;
    scanf("%d %d",&row,&col);
    int sz[100][100];
    int p,q;
    for(p=0;p<row;p++)
	{
		for(q=0;q<col;q++)
		{
			scanf("%d",&sz[p][q]);
		}
	}

	int ROW,COL;
    int row1=0,row2=row-1;
    int col1=0,col2=col-1;
    for(;(row1<=row2)&&(col1<=col2);)
	{
		if((row1<=row2)&&(col1<=col2))
		{
	    	for(COL=col1;COL<=col2;COL++)
			{
			printf("%d\n",sz[row1][COL]);
			}
            row1=row1+1;    
		}
		if((row1<=row2)&&(col1<=col2))
		{
	    	for(ROW=row1;ROW<=row2;ROW++)
			{
			printf("%d\n",sz[ROW][col2]);
			}
		   	col2=col2-1;
		}
		if((row1<=row2)&&(col1<=col2))
		{
            for(COL=col2;COL>=col1;COL--)
			{
			printf("%d\n",sz[row2][COL]);
			}
		    row2=row2-1;
		}
		if((row1<=row2)&&(col1<=col2))
		{
            for(ROW=row2;ROW>=row1;ROW--)
			{
			printf("%d\n",sz[ROW][col1]);
			}
		    col1=col1+1;
		}
	}
    return 0;
}
