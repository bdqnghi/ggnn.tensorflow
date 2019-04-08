int main()
{
	int n,k,t,j,sz[1000];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(t=0;t<n-1;t++){
		for(j=t+1;j<n;j++){
			if(sz[t]+sz[j]==k){
				printf("yes");
				break;
			}
		}
		if(j<n)
			break;
	}
	if(t==n-1){
		printf("no");
	}
	return 0;
}
		