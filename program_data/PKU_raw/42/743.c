void main()
{
	int i,a[100000],n,k,t=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&k);
    	for (i=0;i<n;i++)
		{
			if(a[i]!=k)
				a[i-t]=a[i];
			else
				t=t+1;
		}
		for(i=0;i<n-t-1;i++)
			printf("%d ",a[i]);
		printf("%d",a[n-t-1]);
}
