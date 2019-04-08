void main()
{
	int n,m,i,a[10000];
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(p=a+n;p<(a+n+n-m);p++)
		*p=*(p-n);
	p=(a+n-m);
	printf("%d",*p);
	for(p=(a+n-m+1);p<(a+n+n-m);p++)
		printf(" %d",*p);
}