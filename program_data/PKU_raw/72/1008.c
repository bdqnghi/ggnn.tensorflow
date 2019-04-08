int main(){
	int i,n,m,j,k=0,f;
	int sz[25][25],q[25][25],w[25],s[25];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&sz[i][j]);}
	}
	for(i=0;i<m+2;i++){
	for(j=0;j<n+2;j++){
		 q[0][j]=0,q[m+1][j]=0,q[i][0]=0,q[i][n+1]=0;
		q[i+1][j+1]=sz[i][j];}}
	for(i=1;i<m+1;i++){
	for(j=1;j<n+1;j++){
		if(q[i][j]>=q[i+1][j]&&q[i][j]>=q[i-1][j]&&q[i][j]>=q[i][j+1]&&q[i][j]>=q[i][j-1]){
	
			printf("%d %d\n",i-1,j-1);}}}
	
return 0;
}

