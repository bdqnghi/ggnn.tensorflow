int main(){
	int e,n,i,sz[100];
	scanf("%d\n",&n);
	i=1;
	while(i<=n){
		scanf("%d",&sz[i]);
		i++;
	}
	for(int k=1;k<=n;k++){
		for(i=1;i<=k;i++){
			if(sz[i]>sz[i+1]){
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
	printf("%d\n%d\n",sz[n],sz[n-1]);
	return 0;
}