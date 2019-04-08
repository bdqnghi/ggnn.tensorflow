int main(){
	int row, col, matrix[ROW][COL];
	int i, j;
    int xxrow,sxrow,xxcol,sxcol; 
	scanf("%d %d", &row, &col);
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d", &(matrix[i][j]));
		}
	}
	xxrow= 0;
    sxrow= row-1;
    xxcol=0;
    sxcol=col-1;
	
    while( (xxrow<sxrow) && (xxcol<sxcol) ){
		for(j =xxcol; j <sxcol; j++){
	printf("%d\n", matrix[xxrow][j]);
		}

for(i = xxrow; i < sxrow; i++){
	printf("%d\n", matrix[i][sxcol]);
}

for(j = sxcol; j > xxcol; j--){
	printf("%d\n", matrix[sxrow][j]);
}

for(i = sxrow; i > xxrow; i--){
	printf("%d\n", matrix[i][xxcol]);
}
              xxrow++;
    	      sxrow--;
             xxcol ++;
             sxcol --;
	
	}
    if((xxrow==sxrow)&&(xxcol<sxcol)){
		for(j=xxcol;j<sxcol+1;j++){
			printf("%d\n",matrix[xxrow][j]);
		}
	}
	else if(xxrow<sxrow&&xxcol==sxcol){
		for(i=xxrow;i<sxrow+1;i++){
			printf("%d\n",matrix[i][xxcol]);
		}
	}
	else if((xxrow==sxrow)&&(xxcol==sxcol)){
		printf("%d\n",matrix[xxrow][xxcol]);
	}
	


	return 0;
}
