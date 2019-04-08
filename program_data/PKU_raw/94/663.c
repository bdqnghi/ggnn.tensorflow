int main(){
	int N,i,e,l;
	scanf("%d",&N);
	int sz[500];
	for(i=0;i<N;i++){
		scanf("%d ",&sz[i]);
	}
	int js[500];
	int j=0;
	int n=0;
	for(i=0;i<N;i++){
		if(sz[i]%2==1){
			js[j]=sz[i];
			j=j+1;
			n=n+1;
		}
	}
	for(l=n-1;l>0;l--){
	for(j=0;j<l;j++){
		if(js[j]>js[j+1]){
			e=js[j+1];
			js[j+1]=js[j];
			js[j]=e;
		}
	}
	}
	for(j=0;j<n-1;j++){
		printf("%d,",js[j]);
	}
	printf("%d",js[n-1]);
	return 0;
}