int main(){
	int N,sz[500];
	scanf("%d",&N);
	int i,j,e,d;
	d=0;
	for(i=0;i<N;i++){
		scanf("%d",&sz[i]);
	}
	for(j=1;j<=N;j++){
		for(i=0;i<N-j;i++){
			if(sz[i]>sz[i+1]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	for(i=0;i<N;i++){
		if(sz[i]%2!=0){
			d=i;
			break;
		}
	}
	printf("%d",sz[d]);
	for(i=d+1;i<N;i++){
		if(sz[i]%2!=0){
			printf(",%d",sz[i]);
		}
	}
	return 0;
}