int main(){
	int N;
	int e,i;
	int m=0;
	scanf("%d",&N);
	int sz[1000];
	for(i=0;i<N;i++){
		scanf("%d",&sz[i]);
	}
	for(int k=N-1;k>0;k--){
		for(i=0;i<k;i++){
			if(sz[i]>sz[i+1]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	for(i=0;i<N;i++){
		if(sz[i]%2!=0){
			m=i;
		}
	}
	for(i=0;i<=m;i++){
		if(sz[i]%2!=0&&i<m){
			printf("%d,",sz[i]);
		}
		if(i==m){
			printf("%d",sz[m]);
		}
	}
	
	
		

	return 0;
}





