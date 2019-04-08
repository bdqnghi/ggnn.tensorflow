int main(){
	int n,a[100],i,b,c,d,f[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	c=n-1;
	b=a[c];
	for(i=0;i<n;i++){
		d=n-1-i;
		f[d]=a[i];}
	for(i=0;i<c;i++){
		printf("%d ",f[i]);}
	printf("%d",f[c]);
	return 0;
}