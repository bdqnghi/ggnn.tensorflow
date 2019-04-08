int main()
{
	int i,n;
	int a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i-1]);
	}
	for(i=n;i>=2;i--){
		printf("%d ",a[i-1]);
	}
	printf("%d",a[0]);
	return 0;
}