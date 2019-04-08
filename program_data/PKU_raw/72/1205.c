int main(){
	int i,k,j,m,n,e=0;
	int sz[102][102]={0};
	int s[100][2];
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
            scanf("%d",&sz[i][j]);
		}	
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i][j-1]){
				s[e][0]=i-1;
				s[e][1]=j-1;
				e++;
			}
		}
	}
	for(i=0;i<e;i++){
		printf("%d %d\n",s[i][0],s[i][1]);}
	return 0;
	
}