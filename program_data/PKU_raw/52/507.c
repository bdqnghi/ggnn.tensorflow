void main()
{
	int a[100],n,m,t,i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-m;i<n;i++)
	{
		t=a[i];
		for(j=i;j>=i-n+m+1;j--)
			a[j]=a[j-1];
		a[i-n+m]=t;
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
}
