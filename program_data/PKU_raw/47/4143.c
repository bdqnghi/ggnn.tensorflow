int main()
{
    int n,i,j;
	int a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
	printf("%d",a[n]);
	for(i=n-1;i>0;i--)
		printf(" %d",a[i]);
	return 0;
}
