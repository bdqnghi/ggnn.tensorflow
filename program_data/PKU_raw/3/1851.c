int main(){
	int n,k,i,a,b;
	int sz[1001];
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d ",&sz[i]);
	}
	for(a=1;a<n;a++){
		for(b=a+1;b<=n;b++){
			if(sz[a]+sz[b]==k){
				printf("yes");
				break;
			}
		}
		if(sz[a]+sz[b]==k){
			break;
		}
		if(a==n-1){
			printf("no");
		}
	}

	return 0;
}
