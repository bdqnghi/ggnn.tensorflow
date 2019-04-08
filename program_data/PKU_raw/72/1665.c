int main(){
	int sz[21][21];
	int n,m,i,j,s=0,l=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&(sz[i][j]));
		}
	}
	for(j=0;j<=m+1;j++){
		sz[0][j]=4;
		sz[n+1][j]=4;
	}
	for(j=0;j<=n+1;j++){
		sz[j][0]=4;
		sz[j][m+1]=4;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if((sz[i][j]>=sz[i-1][j])&&(sz[i][j]>=sz[i+1][j])&&(sz[i][j]>=sz[i][j-1])&&(sz[i][j]>=sz[i][j+1])){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}