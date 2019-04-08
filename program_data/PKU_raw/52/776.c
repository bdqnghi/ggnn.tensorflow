void main()
{
	int n,m,i,a[200],k,l,o;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
       scanf("%d",&a[i]);
	for(k=n-1;k>=0;k--)
		a[k+m]=a[k];
	for(l=0;l<m;l++)
		a[l]=a[n+l];
	for (o=0;o<n-1;o++)
		printf("%d ",a[o]);
	printf("%d\n",a[n-1]);
}