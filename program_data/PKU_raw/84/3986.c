void main()
{
	int n,i,k,a[102],j;
	scanf("%d",&n);
	for (i=1;i<=n;i++) scanf("%d",&a[i]);
	for (i=1;i<=2;i++)
	{
		k=1;
		for (j=2;j<=n;j++) if (a[j]>a[k]) k=j;
		printf("%d\n",a[k]);
		a[k]=-10000;
	}


}