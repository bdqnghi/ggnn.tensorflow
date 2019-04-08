int main(){
	int n,a,b,c,d,e,f,i,j,m;
    int sz[5000];
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);	
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			if((sz[i]+sz[j])==m){
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
	return 0;
}
