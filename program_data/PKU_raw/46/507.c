int main() {
	int row,col;
	int sz[100][100];
	scanf("%d %d",&row,&col);
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int xx_row=0;
	int sx_row=row-1;
	int xx_col=0;
	int sx_col=col-1;
	while((xx_row<sx_row)&&(xx_col<sx_col)){
		for(int i=xx_col;i<sx_col;i++){
			printf("%d\n",sz[xx_row][i]);
		}
		for(int j=xx_row;j<sx_row;j++){
			printf("%d\n",sz[j][sx_col]);
		}
		for(int k=sx_col;k>xx_col;k--){
			printf("%d\n",sz[sx_row][k]);
		}
		for(int p=sx_row;p>xx_row;p--){
			printf("%d\n",sz[p][xx_col]);
		}
		xx_row++;
		sx_row--;
		xx_col++;
		sx_col--;}
if((xx_row==sx_row)&&(xx_col!=sx_col)){
for(int i=xx_row;i<=sx_col;i++){printf("%d\n",sz[xx_row][i]);}}
if((xx_col==sx_col)&&(xx_row!=sx_row)){
for(int i=xx_col;i<=sx_row;i++){printf("%d\n",sz[i][xx_col]);}}
if((xx_row==sx_row)&&(xx_col==sx_col)){
printf("%d\n",sz[xx_row][sx_col]);}
return 0;
}




