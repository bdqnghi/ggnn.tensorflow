int main(){
	int m,n,i,j,sz[22][22];
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<=m+1;i++){
		for(j=0;j<=n+1;j++){
            if(i==0||i==m+1||j==0||j==n+1){
		        sz[i][j]=0;
			}
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if((sz[i][j]>=sz[i-1][j])&&(sz[i][j]>=sz[i+1][j])&&(sz[i][j]>=sz[i][j-1])&&(sz[i][j]>=sz[i][j+1])){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}