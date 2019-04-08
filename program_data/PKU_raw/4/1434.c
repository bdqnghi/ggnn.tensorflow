int main(){
	int array[100][100],ROW,COL,i=0,k=0,j=0;
		scanf("%d%d",&ROW,&COL);
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				scanf("%d",&array[i][j]);
			}
		}
	for (k=0; k<COL; k++) {
		for (i=0, j=k; i<ROW&& j>=0; i++, j--){
            printf("%d\n",array[i][j]);
		}
	}
for (k=1; k<ROW; k++) {
	for ( i=k,  j=COL-1; i<ROW && j>=0; i++, j--){
printf("%d\n",array[i][j]);
}
}
	return 0;
}