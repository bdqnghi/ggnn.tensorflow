void main()
{
	int n,m,i,j,t,k;
	int a[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(k=n-m;k<n;k++)
	{
		for(j=0,i=k;j<n-m;j++,i--)
	{
		t=a[i];
		a[i]=a[i-1];
		a[i-1]=t;
	}
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
}