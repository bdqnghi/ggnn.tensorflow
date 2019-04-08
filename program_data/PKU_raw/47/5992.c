void main(int argc, char* argv[])
{
	int a[100],b[100];
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[n-1-i]=a[i];
	}
	for (i=0;i<n;i++)
	{
		if (i==n-1)
		{
			printf("%d",b[i]);
		}
		else
		{
			printf("%d ",b[i]);
		}
	}
}
