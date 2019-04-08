int main(){
	int m,n,row,col;
	int sz[20][20];

	scanf("%d%d",&m,&n);
    
   	for(row=0;row<m;row++){
   		for(col=0;col<n;col++){
   			scanf("%d",&sz[row][col]);
   		}
   	}

	for(row=0;row<m;row++){
		for(col=0;col<n;col++){
			if(row==0){
				if(col==0&&sz[0][0]>=sz[0][1]&&sz[0][0]>=sz[1][0]){
					printf("%d %d\n",row,col);
				}else if(col==n-1&&sz[0][n-1]>=sz[0][n-2]&&sz[0][n-1]>=sz[1][n-1]){
					printf("%d %d\n",row,col);
				}else if(sz[0][col]>=sz[0][col-1]&&sz[0][col]>=sz[0][col+1]&&sz[0][col]>=sz[1][col]){
					printf("%d %d\n",row,col);
				}
			}else if(col==0){
				if(row==n-1&&sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row-1][col]){
					printf("%d %d\n",row,col);
				}else if(sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row+1][col]){
					printf("%d %d\n",row,col);
				}
			}else if(row==m-1){
				if(col==n-1&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row-1][col]){
					printf("%d %d\n",row,col);
				}else if(sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row-1][col]){
					printf("%d %d\n",row,col);
				}
			}else if(col==n-1&&sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row+1][col]){
				printf("%d %d\n",row,col);
			}else if(sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row-1][col]&&sz[row][col]>=sz[row+1][col]){
					printf("%d %d\n",row,col);
			}

		}
	}


	return 0;
}
