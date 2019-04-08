
int main()
{
	int a[100],b[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		b[i]=a[n-1-i];
		printf("%d ",b[i]);
	}
	printf("%d",a[0]);
	return 0;
}
