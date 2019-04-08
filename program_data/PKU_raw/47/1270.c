int main(){
	int sz[100],n;
	scanf("%d\n",&n);
	int i;
	for(i=1;i<=n;i++){
		if(i<n){
			scanf("%d ",&sz[i-1]);
		}
		else{
			scanf("%d",&sz[i-1]);
		}
	}
	for(i=n;i>=1;i--){
		if(i>1){
			printf("%d ",sz[i-1]);
		}
		else{
			printf("%d",sz[i-1]);
		}
	}
	return 0;
}