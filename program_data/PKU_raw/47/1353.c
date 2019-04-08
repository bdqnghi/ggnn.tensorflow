int main(){
	int n;
	scanf("%d",&n);
	int sz[100];
	for(int a=0;a<=n-1;a++){
		scanf("%d",&(sz[a]));
	}
	for(int b=n-1;b>=1;b=b-1){
		printf("%d ",sz[b]);
	}
	printf("%d",sz[0]);
	return 0;
}