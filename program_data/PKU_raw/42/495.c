int main()
{
	int a[200000],b=0,n,i,j,k;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			b++;
			for (j=i+1;j<n+1;j++)
				a[j-1]=a[j];
			i--;
		}
	}
	for (i=0;i<n-b-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-b-1]);
	return 0;
}