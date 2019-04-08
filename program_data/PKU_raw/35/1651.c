int main(){
	int a[8][8],maxcolIndex[8];
	int row,col,i,flag=0;
	int ROW,COL;
	scanf("%d",&ROW);
	getchar();
	scanf("%d",&COL);
	for(row=0;row<ROW;row++){
		for(col=0;col<COL;col++){
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<ROW;row++){
		maxcolIndex[row]=0;
        for(col=0;col<COL;col++){
			if(a[row][col]>a[row][maxcolIndex[row]]){
				maxcolIndex[row]=col;
			}
		}
	}
    for(row=0;row<ROW;row++){
        for(i=0;i<ROW;i++){
			if(a[i][maxcolIndex[row]]<a[row][maxcolIndex[row]]){
				break;
			}
			if(a[i][maxcolIndex[row]]>=a[row][maxcolIndex[row]]&&i==ROW-1){
				printf("%d+%d",row,maxcolIndex[row]);
				flag=1;
			}
		}
	}
	if(flag==0){
		printf("No");
	}
	return 0;
}
