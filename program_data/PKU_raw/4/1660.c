int main(){
	int sz[100][100];
	int i,k,n,j;
	int ROW,COL,row,col;
	scanf("%d %d",&ROW,&COL);
	if(ROW>COL){
		j=COL-1;
	}
	else{
		j=ROW-1;
	}
	for(i=0;i<ROW;i++){
		for(k=0;k<COL;k++){
			scanf("%d",&(sz[i][k]));
		}
	}
	for(n=0;n<=j;n++){
		for(row=0;row<=n;row++){
			printf("%d\n",sz[row][n-row]);
		}
	}
	if(COL>ROW){
		for(n=j+1;n<COL;n++){
			for(row=0;row<ROW;row++){
				printf("%d\n",sz[row][n-row]);
			}
		}
		for(n=COL;n<=COL+ROW-2;n++){
			for(col=COL-1;col>=n-ROW+1;col--){
				printf("%d\n",sz[n-col][col]);
			}
		}
	}
	if(ROW>COL){
		for(n=j+1;n<ROW;n++){
			for(col=COL-1;col>=0;col--){
				printf("%d\n",sz[n-col][col]);
			}
		}
		for(n=ROW;n<=COL+ROW-2;n++){
			for(col=COL-1;col>=n-ROW+1;col--){
				printf("%d\n",sz[n-col][col]);
			}
		}
	}
	if(ROW==COL){
		for(n=j+1;n<=COL+ROW-2;n++){
			for(col=COL-1;col>=n-ROW+1;col--){
				printf("%d\n",sz[n-col][col]);
			}
		}
	}
	return 0;
}
