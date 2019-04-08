void main()
{
	int n,m,a[100],k,t,u,i,h;
	scanf("%d %d",&n,&m);
    scanf("%d",&a[0]);
	for(k=1;k<=n-1;k++)
		scanf(" %d",&a[k]);
	if (m==1)
	{
		printf("%d",a[n-m]);
	for(i=0;i<=n-2;i++)
		printf(" %d",a[i]);
        printf("\n");
	}
	else if (m==n)
	{
		printf("%d",a[0]);
		for(t=1;t<=n-1;t++)
			printf(" %d",a[t]);
		printf("\n");
	}
	else 
	{
		printf("%d",a[n-m]);
		for(h=n-m+1;h<=n-1;h++)
			printf(" %d",a[h]);
		for(u=0;u<=n-m-1;u++)
			printf(" %d",a[u]);
	}
	printf("\n");
}
	
