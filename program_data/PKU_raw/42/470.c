void main()
{
	int n,i,k,m,a[100000];
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
		scanf("%d ",&a[i]);
	scanf("%d",&a[n-1]);
	putchar('\n');
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(m=i;m<n;m++)
				a[m]=a[m+1];
			i--;
             n=n-1;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	printf(" %d",a[i]);
}