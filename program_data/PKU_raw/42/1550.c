int main()
{
	int n,sz[100000],k;
	int i,t=0,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d ",&sz[i]);
	}
	scanf("%d",&k);
		for(i=0;i<n;i++){
		if(sz[i]!=k){
		
        s++;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]!=k&&t!=s-1){
			printf("%d ",sz[i]);
			t++;
		}else if(sz[i]!=k&&t==s-1){
			printf("%d",sz[i]);
		}
	}
	return 0;
}


