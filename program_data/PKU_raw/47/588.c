int main()
{
	int i,n,a[100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[n-1-i]);
	}
	for(i=0;i<n;i++)
	{
	    if(i==n-1)
		printf("%d",a[i]);
		else
			printf("%d ",a[i]);
	}
	
	return 0;
}