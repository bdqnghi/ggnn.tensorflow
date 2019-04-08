int main()
{
	int n,k,i,j,sz[50000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n+1;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]+sz[j]==k){
				printf("yes");
			    j=n;
				i=n+1;
			}
		}
		if(i==n){
			printf("no");
		}
	}
	return 0;
}
