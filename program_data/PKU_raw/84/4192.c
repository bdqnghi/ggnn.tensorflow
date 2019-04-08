void main()
{
	int a[100],i,n,max1,max2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max1=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
		continue;
		}
		else
				continue;
	}
	max2=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]<max1&&a[i]>max2)
			{
				max2=a[i];
			continue;
			}
			else
				continue;
		}
		printf("%d\n%d\n",max1,max2);
}