void main()
{
	int n,m,i,a[10000];
	scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
	if(i<n-m)
    scanf("%d",&a[i+m]);
	if(i>=n-m)
	scanf("%d",&a[i-n+m]);
	}
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[i]);
}