void main()
{
	int a[200],n,m,i,j;
	scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
		a[m+i]=a[i];
	for(i=0;i<m;i++)
		a[i]=0;
	for(j=n;j<n+m;j++)
		a[j-n]=a[j];
	for(j=0;j<n-1;j++)
	printf("%d ",a[j]);
		printf("%d",a[n-1]);
}
		
