


int main()
{
	int n,m=0,i=0;
	int a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",a[n-1]);
	for(m=n-2;m>=0;m--)
	{
		printf(" %d",a[m]);
	}
return 0;	
}