
main()
{
	int max1,max2,n,i,j,a[100];
	scanf("%d\n",&n);
	max1=0;
	max2=0;
    for (i=1;i<=n;i++) 
	{
		scanf("%d",&a[i]);
		if (a[i]>max1) 
		{
			max1=a[i];
			j=i;
		}
	}
    for (i=1;i<=n;i++)
	{
		if (i!=j) 
			if (a[i]>max2) max2=a[i];
	}
	printf("%d\n%d\n",max1,max2);
}