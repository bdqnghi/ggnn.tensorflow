int main()
{
    int sz[1000];
    int n,k,i,r,e=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i=i+1){
		scanf("%d ",&sz[i]);
		}
	for(i=0;i<n;i=i+1){
		for(r=i+1;r<n;r=r+1){
			if(sz[i]+sz[r]==k){
				e=1;
				break;
				}
			}
		if(e==1) break;
	}
	if(e==1) printf("yes");
	if(e==0) printf("no");
    
    return 0;
}