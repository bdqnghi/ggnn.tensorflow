void main()
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	int *p;
	p=a;
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p=p+1;
	}
	p=p-1;
	for(i=0;i<n-1;i++)
	{
		printf("%d ",*p);
		p=p-1;
	}
	printf("%d",*p);
}

