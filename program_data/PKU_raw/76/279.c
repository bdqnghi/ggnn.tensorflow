int main()
{
	int i,j,n,a[10009]={0},t,k,e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&t,&k);
		for(j=t+1;j<=k;j++){
			a[j]++;
		}
	}
	for(i=0;i<10009;i++){
		if(a[i]!=0){
			t=i;break;
	}}
	for(i=10008;i>=0;i--){
		if(a[i]!=0){
			k=i;break;
	}}
	for(i=t;i<=k;i++){
		if(a[i]==0){
			e++;break;
	}}
	if(e!=0){
		printf("no");
	}
	else printf("%d %d",t-1,k);
	return 0;
}
