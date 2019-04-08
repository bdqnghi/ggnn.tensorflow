int main(){
	int n,k,i;
	int sz[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(sz[i]+sz[j]==k){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
