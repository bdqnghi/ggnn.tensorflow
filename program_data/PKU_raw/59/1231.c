int main(){
	char sz[102][102]={0};
	int szs[102][102]={0};
	int n,m,i,j,s=0,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf(" %c",&sz[i][j]);
			if(sz[i][j]=='@'){
				s++;
			}
		}
	}
	scanf("%d",&m);
	for(k=0;k<m-1;k++){
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(sz[i][j]=='@'){
					szs[i][j]=1;
				}
			}
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(szs[i][j]==1){
					if(sz[i-1][j]=='.'){
						sz[i-1][j]='@';
						s++;
					}
					if(sz[i+1][j]=='.'){
						sz[i+1][j]='@';
						s++;
					}
					if(sz[i][j+1]=='.'){
						sz[i][j+1]='@';
						s++;
					}
					if(sz[i][j-1]=='.'){
						sz[i][j-1]='@';
						s++;
					}
				}
			}
		}
	}
	printf("%d",s);
	return 0;
}