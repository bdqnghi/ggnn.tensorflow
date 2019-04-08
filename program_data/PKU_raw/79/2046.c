int sz[301];
int m,n;
int remove(int k);
int main(){
	int i,k;
	scanf("%d%d",&n,&m);
	while(m||n){
		for(i=0;i<n;i++){
			sz[i]=i+1;
		}
		for(k=0;n>1;n--){
			k=remove(k);
		}
		printf("%d\n",sz[0]);
		scanf("%d%d",&n,&m);
	}
	return 0;
}
int remove(int k){
	int i,t;
	t=(m+k-1)%n;
	for(i=t+1;i<n;i++){
		sz[i-1]=sz[i];
	}
	return t%(n-1);
}