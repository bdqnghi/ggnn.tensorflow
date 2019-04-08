
int main()
{
	int row,col,i,j;
	int array[100][100];
	scanf("%d%d", &row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d", &array[i][j]);}}
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d\n", array[j][i-j]);
			if(i-j==0) break;
		}
	}	
	for(i=1;i<row;i++){
		for(j=i;j<row;j++){
			printf("%d\n",array[j][col-1-j+i]);
			if(col-1-j+i==0) break;}}
	return 0;
}