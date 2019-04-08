int exchange(int sz[5][5],int a, int b)
{
	if(0<=a&&a<=4&&0<=b&&b<=4){
		int i;
		for(i=0;i<5;i++){
			int e=sz[a][i];
			sz[a][i]=sz[b][i];
			sz[b][i]=e;
		}
		return 1;	
	}else{
		return 0;
	}
}
int main()
{
	int matrix[5][5];
	int row,col;
	for(row=0;row<5;row++){
		for(col=0;col<5;col++){
			scanf("%d",&matrix[row][col]);
		}
	}
	int n,m;
	scanf("%d %d",&n, &m);
	int judge;
	judge=exchange(matrix,n,m);
	if(judge==0)
		printf("error");
	if(judge==1){
		for(row=0;row<5;row++){
			for(col=0;col<4;col++){
				printf("%d ",matrix[row][col]);
			}
			printf("%d\n",matrix[row][4]);
		}
	}	
	return 0;
}