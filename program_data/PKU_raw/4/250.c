int main(){
	int row,col,sz[100][100];
	int xx_row,sx_row,xx_col,sx_col;
	int i,j,c,r;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	xx_row=0;
	sx_row=row-1;
	xx_col=0;
	sx_col=col-1;
	if(col>row){
		for(c=xx_col;c<=sx_row;c++){
			i=0;
			for(j=c;j>=xx_col;j--){
				printf("%d\n",sz[i][j]);
				i++;
			}
		}
		for(c=sx_row+1;c<sx_col;c++){
			j=c;
			for(i=0;i<=sx_row;i++){
				printf("%d\n",sz[i][j]);
				j--;
			}
		}
		for(r=xx_row;r<=sx_row;r++){
			j=sx_col;
			for(i=r;i<=sx_row;i++){
				printf("%d\n",sz[i][j]);
				j--;
			}
		}
	}
	if(col<row){
		for(c=xx_col;c<=sx_col;c++){
			i=0;
			for(j=c;j>=xx_col;j--){
				printf("%d\n",sz[i][j]);
				i++;
			}
		}
		for(r=xx_row+1;r<row-col;r++){
			i=r;
			for(j=sx_col;j>=xx_col;j--){
				printf("%d\n",sz[i][j]);
				i++;
			}
		}
		for(r=row-col;r<=sx_row;r++){
			j=sx_col;
			for(i=r;i<=sx_row;i++){
				printf("%d\n",sz[i][j]);
				j--;
			}
		}
	}
	if(col==row){
     	for(c=xx_col;c<=sx_row;c++){
			i=0;
			for(j=c;j>=xx_col;j--){
				printf("%d\n",sz[i][j]);
				i++;
			}
		}
		for(r=xx_row+1;r<=sx_row;r++){
			j=sx_col;
			for(i=r;i<=sx_row;i++){
				printf("%d\n",sz[i][j]);
				j--;
			}
		}
	}
	return 0;
}




