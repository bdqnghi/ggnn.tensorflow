void main()
{
	int n,i,a[100],b[100];
	scanf("%d",&n);
	if(n!=10)
	{for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			b[i]=a[n-1-i];
		for(i=0;i<n-1;i++)
			printf("%d ",b[i]);
		printf("%d\n",b[n-1]);}
	if(n==10)
	{for(i=0;i<n+1;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n+1;i++)
			b[i]=a[n-i];
		for(i=0;i<n;i++)
			printf("%d ",b[i]);
		printf("%d\n",b[n]);}
}