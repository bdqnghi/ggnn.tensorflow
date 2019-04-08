void main()

{
	int a[100],b[100],n,m,i;

	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n-m;i++)
		b[m+i]=a[i];
	for(i=0;i<m;i++)
		b[i]=a[n-m+i];
	for(i=0;i<n-1;i++)
		printf("%d ",b[i]);
	printf("%d",b[n-1]);
}