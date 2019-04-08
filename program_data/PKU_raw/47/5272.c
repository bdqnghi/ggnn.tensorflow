void main()
{
	int i,n,*p;
	scanf("%d",&n);
	p=(int *)(malloc(n*sizeof(int)));
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=n-1;i>0;i--)
	{
		printf("%d ",*(p+i));
	}
	printf("%d",*(p+i));
}