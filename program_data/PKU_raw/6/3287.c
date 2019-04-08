int main(){
	int sz[100][100];
	int x,k,m,n,i,j,sum;
	scanf("%d",&k);
	for(x=0;x<k;x++){
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&sz[i][j]);
			}
			}
		sum=0;
		for(j=0;j<n-1;j++){
			sum+=sz[0][j];
		}
		for(i=0;i<m-1;i++){
			sum+=sz[i][j];
		}
		for(;j>0;j--){
			sum+=sz[i][j];
		}
		for(;i>0;i--){
			sum+=sz[i][j];
		}
		printf("%d\n",sum);
	}
	return 0;
}