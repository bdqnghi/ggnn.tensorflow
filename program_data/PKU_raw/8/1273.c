main()
{
	int m,n,i,j;
	static int a[100],b[100];
	scanf("%d %d\n",&m,&n);

	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		if(a[j]<a[i])
		{
			a[j]=a[j]+a[i];
			a[i]=a[j]-a[i];
			a[j]=a[j]-a[i];
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(b[j]<b[i])
		{
			b[j]=b[j]+b[i];
			b[i]=b[j]-b[i];
			b[j]=b[j]-b[i];
		}
	}
	for(i=m;i<m+n;i++)
	a[i]=b[i-m];
	for(i=0;i<m+n-1;i++)
	printf("%d ",a[i]);
printf("%d",a[m+n-1]);
}