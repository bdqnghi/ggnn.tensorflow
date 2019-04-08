int main()
{
	int a[100],b[100]={0};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n-1;i++)
	{
		b[i]=a[n-i-1];
        printf("%d ",b[i]);
    }
    b[n-1]=a[0];
    printf("%d",b[n-1]);
	return 0;
}
