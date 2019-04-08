int main()
{
	int row, col;
	int jz[100][100];
	int i=0;
	int j=0;
	int m=0;
	int n=0;
	scanf("%d %d",&row, &col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			scanf("%d",&jz[i][j]);
	}

	printf("%d\n",jz[0][0]);

	if(row<=col){
		for(m=0,n=1;n<col;n++){
			for(i=m,j=n;j>=0&&i<row;i++,j--){
				printf("%d\n", jz[i][j]);
			}
		}
		for(m=1,n=col-1;m<row-1;m++){
			for(i=m,j=n;i<row;i++,j--){
				printf("%d\n",jz[i][j]);
			}
		}
	}
	
	else if(row>col){
		for(m=0,n=1;n<col;n++){
			for(i=m,j=n;j>=0&&i<row;i++,j--){
				printf("%d\n", jz[i][j]);
			}
		}
		for(m=1,n=col-1;m<row-1;m++){
			for(i=m,j=n;i<row&&j>=0;i++,j--){
				printf("%d\n",jz[i][j]);
			}
		}
	}
	if(row!=1)
		printf("%d", jz[row-1][col-1]);


	return 0;
}