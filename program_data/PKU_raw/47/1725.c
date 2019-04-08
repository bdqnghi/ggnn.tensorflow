void main()
{
	int a[1000],b[1000];
	int n,i;
	int *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	for(i=0;i<n;i++)
	{
		b[i]=*(p+n-i-1);
	}
	printf("%d",b[0]);
	for(i=1;i<n;i++)
		printf(" %d",b[i]);
}


