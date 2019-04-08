void main ()
{
	int  a[100],m,n;
	scanf("%d %d",&n,&m);
	int i;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int *p[100];
	for (i=0;i<n-m;i++)
		p[i+m]=&a[i];
	for (i=n-m;i<n;i++)
		p[i-n+m]=&a[i];
	for (i=0;i<n-1;i++)
		printf("%d ",*p[i]);
	printf("%d\n",*p[n-1]);
}