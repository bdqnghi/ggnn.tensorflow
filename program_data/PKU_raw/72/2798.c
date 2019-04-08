int main(){
	int n,m,sz[20][20],row,col;
	scanf("%d %d",&m,&n);
	for(row=0;row<m;row++){
		for(col=0;col<n;col++){
			scanf("%d",&sz[row][col]);
		}
	}
	if(sz[0][0]>=sz[0][1]&&sz[0][0]>=sz[1][0])
		printf("%d %d\n",0,0);
	for(col=1;col<n-1;col++){
		if(sz[0][col]>=sz[0][col-1]&&sz[0][col]>=sz[1][col]&&sz[0][col]>=sz[0][col+1])
			printf("%d %d\n",0,col);
	}
	if(sz[0][n-1]>=sz[0][n-2]&&sz[0][n-1]>=sz[1][n-1])
		printf("%d %d\n",0,n-1);
	for(row=1;row<m-1;row++){
		if(sz[row][0]>=sz[row][1]&&sz[row][0]>=sz[row-1][0]&&sz[row][0]>=sz[row+1][0])
			printf("%d %d\n",row,0);
		for(col=1;col<n-1;col++){
		if(sz[row][col]>=sz[row][col-1]&&sz[row][col]>=sz[row+1][col]&&sz[row][col]>=sz[row][col+1]&&sz[row][col]>=sz[row-1][col])
			printf("%d %d\n",row,col);
		}
		if(sz[row][n-1]>=sz[row][n-2]&&sz[row][n-1]>=sz[row+1][n-1]&&sz[row][n-1]>=sz[row-1][n-1])
			printf("%d %d\n",row,n-1);
	}
	if(sz[m-1][0]>=sz[m-1][1]&&sz[m-1][0]>=sz[m-2][0])
		printf("%d %d\n",m-1,0);
	for(col=1;col<n-1;col++){
		if(sz[m-1][col]>=sz[m-1][col-1]&&sz[m-1][col]>=sz[m-2][col]&&sz[m-1][col]>=sz[m-1][col+1])
			printf("%d %d\n",m-1,col);
	}
	if(sz[m-1][n-1]>=sz[m-1][n-2]&&sz[m-1][n-1]>=sz[m-2][n-1])
		printf("%d %d",m-1,n-1);
	return 0;
}
