void main()
{
	int n,a[128],*p;
	scanf("%d",&n);
	for(p=a+n;p>=a+1;p--)
		scanf("%d",p);
	for(p=a+1;p<=a+n-1;p++)
		printf("%d ",*p);
	printf("%d",*p);
}