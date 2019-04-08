int main(){
	int sz[100][100],sc[10000];
	int m,n,i,j,a,t,k;
	

	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	j=1;
	for(k=1;k<=n-n/2;k++){
	for(i=k;i<=n-k+1;i++){
		sc[j]=sz[k][i];
		j++;
	}
	for(i=k;i<=m-k;i++){
			sc[j]=sz[i+1][n-k+1];
			j++;
		}
	for(i=n-k;i>=k;i--){
		sc[j]=sz[m-k+1][i];
		j++;
	}
	for(i=m-k;i>=k+1;i--){
		sc[j]=sz[i][k];
		j++;          
	}
    }
	for(i=1;i<=m*n;i++){
		printf("%d\n",sc[i]);
	}
	
	
return 0;
}