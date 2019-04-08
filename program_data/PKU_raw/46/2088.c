int main(){
	int array[100][100];
	int i,j,x,y,row,col;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&array[i][j]);
		}
	}
	x=0;
	y=0;
	while(1){

		for(j=y;j<col;j++){
			printf("%d\n",array[x][j]);
		}

		x++;
		if( x == row  ){  
			break;
		}
		for(i=x;i<row;i++){
			printf("%d\n",array[i][col-1]);
		}

		col=col-1;
		if( y == col ) 
			break;

		for(j=col-1;j>=y;j--){
			printf("%d\n",array[row-1][j]);
		}
		row=row-1;
		for(i=row-1;i>=x;i--){
			printf("%d\n",array[i][y]);
		}
		y++;
		if( x == row )
			break; 
	}
	return 0;
}
		