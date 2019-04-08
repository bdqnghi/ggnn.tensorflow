void main()
{
	int i,n,max1=0,max2=0,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	    if(max1<a[i])
			max1=a[i];
	}
	printf("\n%d\n",max1);
	for(i=0;i<n;i++)
	{
		if(max2<a[i]&&max1>a[i])
			max2=a[i];
	}
	printf("%d\n",max2);
}
	    
