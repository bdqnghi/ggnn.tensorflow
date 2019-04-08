int main(){
	int i,j,k,s,maxIndex,N,e,m;
	int sz[500];
	scanf("%d",&N);
	for(i=0;i<N;i++){
			scanf("%d",&(sz[i]));
	}
	for(k=1;k<=N;k++){
		maxIndex=0;
		for(j=0;j<=N-k;j++){
			if(sz[j]>sz[maxIndex]){
					maxIndex = j;
			}
		}
		if(maxIndex !=N-k){
		e=sz[maxIndex];
		sz[maxIndex]=sz[N-k];
		sz[N-k]=e;
		}
	}
	for(s=0;s<N;s++){
		if(sz[s]%2!=0){
			printf("%d",sz[s]);
			break;
		}
	}
	for(m=s+1;m<N;m++){
		if(sz[m]%2!=0){
			printf(",%d",sz[m]);
		}
	}
		return 0;
}
