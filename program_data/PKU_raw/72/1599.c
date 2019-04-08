int main(){
	int sz[21][21];
	int i,j;
	int x;
	int m,n;
	int S=0,C=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<=m+1;i++){
		for(j=0;j<=n+1;j++){
			sz[i][j]=0;
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&x);
			sz[i][j]=x;
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1]){
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
	return 0;
}	


