int main(){
	int row,col,m,n;
	int sz[105][105],e[105][105];
	scanf("%d %d",&m,&n);
	for(row=0;row<m;row++){
		for(col=0;col<n;col++){
			scanf("%d",&sz[row][col]);
		}
	}
	while(m>0&&n>0){
		if(m>1&&n>1){
		    for(col=0;col<n;col++){
			    printf("%d\n",sz[0][col]);
			}
		    for(row=1;row<m;row++){
			    printf("%d\n",sz[row][n-1]);
			}
		    for(col=n-2;col>=0;col--){
			    printf("%d\n",sz[m-1][col]);
			}
		    for(row=m-2;row>=1;row--){
			    printf("%d\n",sz[row][0]);
			}
		    for(row=0;row<m;row++){
		        for(col=0;col<n;col++){
				    e[row][col]=sz[row][col];
				}
			}
		}else if(m==1){
			for(col=0;col<n;col++){
			    printf("%d\n",sz[0][col]);
			}
		}else{
			for(row=0;row<m;row++){
				printf("%d\n",sz[row][0]);
			}
		}
		m-=2;
		n-=2;
		for(row=0;row<m;row++){
			for(col=0;col<n;col++){
				sz[row][col]=e[row+1][col+1];
            }
		}
	}
	return 0;
}