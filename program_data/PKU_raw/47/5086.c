
int main()
{
	int i,j,t,n,a[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0,j=n-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("%d",a[0]);
	for (i=1;i<n;i++)
		printf(" %d",a[i]);
	return 0;
}
