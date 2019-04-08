int main(){
    int sz[50000][2],n,row,col,i,e,k;
	scanf("%d",&n);
	for(row=0;row<n;row++){
		for(col=0;col<2;col++){
			scanf("%d",&sz[row][col]);
		}
	}
	for(i=0;i<n;i++){
		for(row=0;row<n-1;row++){
			if(sz[row][0]>sz[row+1][0]){
				e=sz[row][0];
				sz[row][0]=sz[row+1][0];
				sz[row+1][0]=e;
				e=sz[row][1];
				sz[row][1]=sz[row+1][1];
				sz[row+1][1]=e;
			}
		}
	}
	k=0;
	for(row=0;row<n-1;row++){
		if(sz[row][1]<sz[row+1][0]){
			printf("no");
			k=1;
			break;
		}
		if(sz[row][1]>sz[row+1][1]){
			e=sz[row][1];
			sz[row+1][1]=sz[row][1];
			sz[row][1]=e;
		}
	}
	if(k==0){
		printf("%d %d",sz[0][0],sz[n-1][1]);
	}
	return 0;
}