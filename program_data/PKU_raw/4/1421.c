int main(){
	int i,j,row,col,n;
	int sz[100][100];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	if(row>col){
	for(n=0;n<col;n++){
		for(i=0;i<col;i++){
			if(n-i>0||n-i==0){
			printf("%d\n",sz[i][n-i]);
			}
		}
	}
    for(n=col;n<col+row-1;n++){
        for(j=col-1;j>=0;j--){
			if(n-j<row){
			    printf("%d\n",sz[n-j][j]);
			}
		}
	}
	}else{
	for(n=0;n<col;n++){
		for(i=0;i<row;i++){
			if(n-i>0||n-i==0){	
			printf("%d\n",sz[i][n-i]);
			}
		}
	}
    for(n=col;n<col+row-1;n++){
        for(j=col-1;n-j<row;j--){
			    printf("%d\n",sz[n-j][j]);
		}
	}
	}
		
	return 0;
}

