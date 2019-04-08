int main(){
	int a,b,c,d,e,m,n,i,j,k;
	int q[22][22];
	scanf("%d%d",&m,&n);
	for(i=1;i<m;i++){
		for(j=1;j<n+1;j++){
			scanf("%d",&q[i][j]);
		}
		scanf("\n");
	}
	for(i=m,j=1;j<n+1;j++){
		scanf("%d",&q[i][j]);
	}
	for(i=0;i<m+2;i++){
		for(j=0;j<n+2;j++){
			if(i==0||j==0||i==m+1||j==n+1){
				q[i][j]=0;
			}
		}
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(q[i][j]>=q[i+1][j]&&q[i][j]>=q[i][j+1]&&q[i][j]>=q[i-1][j]&&q[i][j]>=q[i][j-1]){
				d=i-1;
				e=j-1;
				printf("%d %d\n",d,e);
			}
		}
	}
	return 0;
}