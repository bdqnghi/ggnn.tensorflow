int main(int argc, char* argv[])
{
	int a[100];
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=n-1;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	i=0;
	printf("%d\n",a[i]);

	return 0;
}

