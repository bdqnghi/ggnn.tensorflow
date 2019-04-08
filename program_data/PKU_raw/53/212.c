void main()
{
	int n,i,j,k=0,bl,a[300],b[300];
	scanf("%d",&n);
	for (j=0;j<=n-1;j++) scanf("%d",&a[j]);
	for (j=0;j<=n-1;j++)
	{
		bl=0;
		for (i=0;i<=j-1;i++)
			if (a[i]==a[j]) bl=1;
		if (bl==0) b[k++]=a[j];
	}
	for (j=0;j<=k-1;j++)
		if (j==k-1) printf("%d\n",b[j]);
			else printf("%d,",b[j]);
}