void main()
{
	int n,i,max1,max2;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	max1=-99999;max2=-99999;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max1) max1=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max2&&a[i]<max1) max2=a[i];
	}
	printf("%d\n%d",max1,max2);
}