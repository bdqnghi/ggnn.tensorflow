int main()
{
	int n,i,a[100],*p,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=b;
	for(i=n-1;i>=0;i--)
		*p++=a[i];
    for(i=0;i<n-1;i++)
		printf("%d ",b[i]);
	printf("%d",b[n-1]);
	return 0;
}