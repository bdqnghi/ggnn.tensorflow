int main(){
	int i,j,k=1,n,m;
	int sz[100][100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(k=1;k<=n/2&&k<=m/2;k++){
	
         
	for(i=k-1,j=k-1;j<m-k;j++){
		
			printf("%d\n",sz[i][j]);
	}
	for(i=k-1,j=m-k;i<n-k;i++){
		
			printf("%d\n",sz[i][j]);
	}
	for(i=n-k,j=m-k;j>k-1;j--){
		
			printf("%d\n",sz[i][j]);
	}
	for(i=n-k,j=k-1;i>k-1;i--){
		
			printf("%d\n",sz[i][j]);
	}
	}
	if(n%2!=0&&n<=m){
		
		for(j=k-1;j<=m-k;j++){
		
		printf("%d\n",sz[n/2][j]);
	}
	}
    else if(m%2!=0){
		
		for(i=k-1;i<=n-k;i++){
		
		printf("%d\n",sz[i][m/2]);
	}
	}
    return 0;
}

