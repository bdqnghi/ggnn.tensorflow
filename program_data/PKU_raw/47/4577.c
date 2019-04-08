int main(){
	int n,i;
	int sz[100];
	int t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n/2;i++){
		t=sz[i];
		sz[i]=sz[n-i-1];
		sz[n-i-1]=t;
	}
	for(i=0;i<n;i++){
		if(i<=n-2){
		printf("%d ",sz[i]);
		}else{
		printf("%d",sz[i]);
		}
	}
	return 0;
}