void main()
{
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[n-i-1]);
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[i]);
}