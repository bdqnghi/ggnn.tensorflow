void main()
{
	int i,n,m,a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n;i<2*n-m;i++)
	 a[i]=a[i-n];
    printf("%d",a[n-m]);
    for(i=n-m+1;i<2*n-m;i++)
		printf(" %d",a[i]);
   printf("\n");
}