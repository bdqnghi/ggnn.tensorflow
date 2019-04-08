int main(){
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int sz[1001];
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int bar=0;
	for(int a=0;a<n;a++){
		for(int b=a+1;b<n;b++){
			if(sz[a]+sz[b]==k)
				bar=1;
		}
	}
	if(bar==1)
		printf("yes");
	if(bar==0)
		printf("no");
	return 0;
}
