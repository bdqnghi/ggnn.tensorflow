void main(){
int row, col, i, j, n;
int array[100][100];
scanf("%d%d", &row, &col);
for(i=0;i<row;i++)
    for(j=0;j<col;j++)
		scanf("%d", &array[i][j]);	
for(n=0;n<col;n++){
	for(i=0;i<n+1&&i<row;i++){
		j=n-i;
	    printf("%d\n", array[i][j]);}
}
for(n=col;n<col+row-1;n++){
    for(i=n-col+1;i<row&&i<n+1;i++){
		j=n-i;
	    printf("%d\n", array[i][j]);
	}
}
}
