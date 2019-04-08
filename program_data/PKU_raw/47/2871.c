int main()
{
	int n,a[101];
	int *p;
	scanf("%d",&n);
	for(p=a;p<=a+n-1;p++)
	{
		scanf("%d",p);
	}
	p=a+n-1;
	printf("%d",*p);
	for(p=a+n-2;p>=a;p--)
	{
		printf(" %d",*p);
	}
	return 0;
}