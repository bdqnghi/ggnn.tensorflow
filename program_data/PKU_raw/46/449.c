int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int sz[100][100];
	int x=0,y;
	while(x<n){
		for(y=0;y<m;y++){
			scanf("%d",&(sz[x][y]));
		}
		x++;
	}
	int xx_row,xx_col,sx_row,sx_col;
	int i,j;
	xx_row=xx_col=0;
	sx_row=n-1;
	sx_col=m-1;
	while(xx_row<sx_row && xx_col<sx_col){
		for(j=xx_col;j<sx_col;j++){
			printf("%d\n",sz[xx_row][j]);
		}
		for(i=xx_row;i<sx_row;i++){
			printf("%d\n",sz[i][sx_col]);
		}
		for(j=sx_col;j>xx_col;j--){
			printf("%d\n",sz[sx_row][j]);
		}
		for(i=sx_row;i>xx_row;i--){
			printf("%d\n",sz[i][xx_col]);
		}
		xx_row++;
		xx_col++;
		sx_row--;
		sx_col--;
	}
	if(xx_row==sx_row){
		for(j=xx_col;j<=sx_col;j++){
			printf("%d\n",sz[sx_row][j]);
		}
	}else{
	if(xx_col==sx_col){
		for(i=xx_row;i<=sx_row;i++){
			printf("%d\n",sz[i][sx_col]);
		}
	}
	}
	return 0;
}

