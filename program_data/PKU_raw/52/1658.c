void main()
{
	int i,m,n,a[100],*out[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		out[i]=&a[n-m+i];
	}
	for(i=m;i<n;i++)
	{
		out[i]=&a[i-m];
	}
	for(i=0;i<n-1;i++)
	{
	    printf("%d ",*out[i]);
	}
    printf("%d",*out[n-1]);
}


