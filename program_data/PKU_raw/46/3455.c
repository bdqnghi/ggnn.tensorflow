int main(){
int xx_col,sx_col,xx_row,sx_row,row,col,k,i,a[100][100];
scanf("%d%d",&row,&col);
for(k=0;k<row;k++){
	for(i=0;i<col;i++){
		scanf("%d",&a[k][i]);
	}
}
xx_col=0;
xx_row=0;
sx_col=col-1;
sx_row=row-1;
for(;xx_col<=sx_col&&xx_row<=sx_row;xx_col++,xx_row++,sx_col--,sx_row--){
	if(xx_col!=sx_col&&xx_row!=sx_row){
	for(i=xx_col;i<sx_col;i++){
		printf("%d\n",a[xx_row][i]);
	}
	for(i=xx_row;i<sx_row;i++){
		printf("%d\n",a[i][sx_col]);
	}
	for(i=sx_col;i>xx_col;i--){
		printf("%d\n",a[sx_row][i]);
	}
	for(i=sx_row;i>xx_row;i--){
		printf("%d\n",a[i][xx_col]);
	}
	}else if(xx_col==sx_col){
		for(i=xx_row;i<=sx_row;i++){
			printf("%d\n",a[i][xx_col]);
			
		}
	}else if(xx_row==sx_row){
		for(i=xx_col;i<=sx_col;i++){
			printf("%d\n",a[xx_row][i]);
			
		}
	}
}
return 0;
}