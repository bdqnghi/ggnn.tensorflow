void main()
{
	int n,m,i,a[100],k;
	scanf("%d %d\n",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d\n",&a[i]);
	for(i=1;i<=n;i++)
	{if(i<=m)
	k=a[n-m+i];
	else
	k=a[i-m];
	if(i==n)
	printf("%d\n",k);
	else
	printf("%d ",k);
	}
}
