void main()
{
	int i,n,*a,*b;
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=a[n-i-1];
	for(i=0;i<n-1;i++)
		printf("%d ",b[i]);
	printf("%d\n",b[n-1]);
	return;
}

		