void main()
{
	int a[200],i,n,m,k,h;
	scanf("%d %d",&n,&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-m-1;i++)
		a[n+i]=a[i];
	k=(n-m);
	h=(2*n)-m;
	for(i=k;i<h-1;i++)
		printf("%d ",a[i]);
	i=h-1;
	printf("%d",a[i]);
}