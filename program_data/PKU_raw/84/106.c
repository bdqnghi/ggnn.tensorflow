void main()
{
	int n,a[101],i,c,j;
    scanf("%d",&n);
	for(i=0;i<=n-1;i=i+1)scanf("%d",&a[i]);
	for(j=1;j<=2;j=j+1)
	{
		for(i=0;i<=n-2;i=i+1)
		{
			if(a[i]>a[i+1])
			{
				c=a[i];a[i]=a[i+1];a[i+1]=c;
			}
		}
	}
	printf("%d\n%d",a[n-1],a[n-2]);
}
	
