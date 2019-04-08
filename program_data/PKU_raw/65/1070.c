int main(){
	int i,k,t,j,n,a[201],b[201];
	int c=0,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);}
	for(j=0;j<n;j++){
		if(a[j]==0&&b[j]==1){
			c=c+1;}
		else if(a[j]==1&&b[j]==2){
			c=c+1;}
		else if(a[j]==2&&b[j]==0){
			c=c+1;}
		else if(a[j]==1&&b[j]==0){
			f=f+1;}
		else if(a[j]==2&&b[j]==1){
			f=f+1;}
		else if(a[j]==0&&b[j]==2){
			f=f+1;}
	}
	if(f>c){
		printf("B");
		return 0;}
	else if(c>f){
		printf("A");
		return 0;}
	printf("Tie");
	return 0;
}
