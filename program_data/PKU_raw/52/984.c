void main()
{
	int n,m,a[100],*p,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	p=&a[n-m];
	printf("%d",*p);
	for(i=1;i<m;i++)
		printf(" %d",*(p+i));
	p=a;
	for(i=0;i<(n-m);i++)
		printf(" %d",*(p+i));
}
