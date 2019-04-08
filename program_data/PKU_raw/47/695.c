int main()
{
	int n,a[100],i,e;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++){
		scanf(" %d",&a[i]);}
	for(i=0;i<n/2;i++){
		e=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=e;}
	printf("%d",a[0]);
	for(i=1;i<n;i++){
		printf(" %d",a[i]);}
	return 0;
}