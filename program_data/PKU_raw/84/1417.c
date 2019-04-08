int main(){
	int sz[1000],n,i,e,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(k=n;k>1;k--){
		for(i=0;i<k-1;i++){
			if(sz[i]<sz[i+1]){
				e=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=e;
			}
		}
	}
	printf("%d\n%d\n",sz[0],sz[1]);
	return 0;
}
 