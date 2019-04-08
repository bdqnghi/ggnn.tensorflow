int main()
{
	int n;
	scanf("%d",&n);
	int i,u,a[100];
	for(i=0;i<=n-1;i++){
		scanf("%d",&u);
		a[n-1-i]=u;
	}
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++){
		printf(" %d",a[i]);	
	}
	return 0;
}