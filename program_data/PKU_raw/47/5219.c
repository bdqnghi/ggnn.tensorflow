void main()
{
	int n,i,a[100];
	int *p;
	p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=n-1;i>0;i--)
		printf("%d ",*(p+i));
	printf("%d\n",*p);
}
	