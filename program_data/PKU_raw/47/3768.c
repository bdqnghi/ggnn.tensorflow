

int main()
{
	int a[100];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
     for(j=n-1;j>=0;j--)
	{
		printf("%d",a[j]);
		if(j!=0)
		{
			printf(" ");
		}
	}
	return 0;
}