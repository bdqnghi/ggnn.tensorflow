void main()
{
	int a[10000],i,n,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    p=&a[n-1];
	for(p=&a[n-1];p!=&a[0];p--)
		printf("%d ",*p);
	printf("%d",a[0]);
}
	