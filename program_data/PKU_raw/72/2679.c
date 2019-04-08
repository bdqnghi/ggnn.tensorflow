int main(){
	int sz[20][20];
	int m,n;
	scanf("%d%d",&m,&n);
	for(int j=0;j<m;j++){
		for(int k=0;k<n;k++){
			scanf("%d",&sz[j][k]);
		}
	}
	for(int i=0;i<m;i++){
		for(int t=0;t<n;t++){
			if((i!=0)&&(i!=m-1)&&(t!=0)&&(t!=n-1)){
				if((sz[i][t]>=sz[i-1][t])&&(sz[i][t]>=sz[i+1][t])&&(sz[i][t]>=sz[i][t-1])&&(sz[i][t]>=sz[i][t+1])){
					printf("%d %d\n",i,t);
				}
			}
			else if((i==0)&&(t==0)){
				if((sz[0][0]>=sz[0][1])&&(sz[0][0]>=sz[1][0])){
					printf("%d %d\n",i,t);
				}
			}
			else if((i==0)&&(t==n-1)){
				if((sz[0][n-1]>=sz[0][n-2])&&(sz[0][n-1]>=sz[1][n-1])){
					printf("%d %d\n",i,t);
				}
			}
			else if((i==m-1)&&(t==0)){
				if((sz[m-1][0]>=sz[m-2][0])&&(sz[m-1][0]>=sz[m-1][1])){
					printf("%d %d\n",i,t);
				}
			}
			else if((i==m-1)&&(t==n-1)){
				if((sz[m-1][n-1]>=sz[m-1][n-2])&&(sz[m-1][n-1]>=sz[m-2][n-1])){
					printf("%d %d\n",i,t);
				}
			}
			else if(i==0){
				if((sz[i][t]>=sz[i+1][t])&&(sz[i][t]>=sz[i][t-1])&&(sz[i][t]>=sz[i][t+1])){
					printf("%d %d\n",i,t);
				}
			}
			else if(i==m-1){
				if((sz[i][t]>=sz[i-1][t])&&(sz[i][t]>=sz[i][t-1])&&(sz[i][t]>=sz[i][t+1])){
					printf("%d %d\n",i,t);
				}
			}
			else if(t==0){
				if((sz[i][t]>=sz[i-1][t])&&(sz[i][t]>=sz[i+1][t])&&(sz[i][t]>=sz[i][t+1])){
					printf("%d %d\n",i,t);
				}
			}
			else if(t==n-1){
				if((sz[i][t]>=sz[i-1][t])&&(sz[i][t]>=sz[i+1][t])&&(sz[i][t]>=sz[i][t-1])){
					printf("%d %d\n",i,t);
				}
			}
		}
	}
	return 0;
}