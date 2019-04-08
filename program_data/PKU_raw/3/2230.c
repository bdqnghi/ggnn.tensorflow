int main(){
	int sz[1100];
	int n,k,i,j,x;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)x=sz[i]+sz[j];
			 if (x==k) break;
		}
		if(x==k)break;
	}
	
	   if(x==k) printf("yes\n");
	
	if(x!=k)
		printf("no\n");
	return 0;

}