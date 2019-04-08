int main()
{
	int n,k,i,m,p;
	int sz[1000];
	scanf("%d%d\n",&n,&k);
	p=0;
	sz[n]=k;
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	
	for(i=0;i<n;i++){
		for(m=n-1;m>i;m--){
			if(sz[i]+sz[m]==sz[n]){
			p=1;
			}
		}
	}
	if(p==1)
		printf("yes");
	if(p==0)
		printf("no");
	return 0;
}