void main()
{
	int n,m,a[100],i,b;
	scanf("%d %d",&n,&m);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	scanf(" %d",&a[i]);
	b=n-m;
    for (i=0; i<n-1; i++)
	printf("%d ", a[(i+b)%n]);
	printf("%d",a[n-m-1]);
}
