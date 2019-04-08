int main()
{
	int row,col;
	scanf("%d%d",&row,&col);
	int array[100][100];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&array[i][j]);
		}
	}
	if(row==col){
		for(int a=0;a<col;a++){
			for(int j=a;j>=0;j--){
				printf("%d\n",array[a-j][j]);
			}
		}
		for(int b=col;b<(2*col-1);b++){
			for(int i=(b-col+1);i<row;i++){
				printf("%d\n",array[i][b-i]);
			}
		}
	}
	if(row>col){
		for(int a=0;a<col;a++){
			for(int j=a;j>=0;j--){
				printf("%d\n",array[a-j][j]);
			}
		}
		for(int b=col;b<row;b++){
			for(int j=col-1;j>=0;j--){
				printf("%d\n",array[b-j][j]);
			}
		}
		for(int c=row;c<(row+col-1);c++){
			for(int j=col-1;j>(c-row);j--){
				printf("%d\n",array[c-j][j]);
			}
		}
	}
	if(row<col){
		for(int a=0;a<row;a++){
			for(int j=a;j>=0;j--){
				printf("%d\n",array[a-j][j]);
			}
		}
		for(int b=row;b<col;b++){
			for(int i=0;i<row;i++){
				printf("%d\n",array[i][b-i]);
			}
		}
		for(int c=col;c<(row+col-1);c++){
			for(int j=col-1;j>(c-row);j--){
				printf("%d\n",array[c-j][j]);
			}
		}
	}
	return 0;
}