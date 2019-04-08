int main(){
	int i,j;
	int r;
	scanf("%d",&r);
	int n;
	for(j=0;j<r;j++){
	scanf("%d",&n);
	int sz[10000];
	sz[0]=0;
	sz[1]=1;
	if(n==1){
		printf("1\n");
	}
   	if(n>=2){
		for(i=2;i<=n;i++){
			sz[i]=sz[i-1]+sz[i-2];
		}
			printf("%d\n",sz[n]);
			for(i=2;i<=n;i++){
				sz[i]=0;
			}
	}
	}
	return 0;
}