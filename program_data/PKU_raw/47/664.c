

int main()
{
	int n;
	int a[100];
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	while (n--)
	{
		printf("%d",a[n]);
		if (n!=0)
		{
			printf(" ");
		}
	}
	return 0;
}