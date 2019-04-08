int main(){
	int n,e;
	scanf("%d",&n);
	int sz[100];
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}

	for(int k=0;k<n/2;k++){
			e=sz[k];
			sz[k]=sz[n-1-k];
			sz[n-1-k]=e;
		}
         printf("%d",sz[0]);
	for(int j=1;j<n;j++){
		printf(" %d",sz[j]);
	}
         
	return 0;
}