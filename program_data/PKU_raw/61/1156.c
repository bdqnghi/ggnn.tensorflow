
int main()
{
	int a[20]={1,1};
	int i;
	int N;
	int b[20];
	for (i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];	
	}
	
	
	
	scanf("%d",&N);
	printf("\n");
	for (i=0;i<=N-1;i++)
	{
		scanf("%d",&b[i]);
		printf("\n");
	}
	
	for (i=0;i<=N-1;i++)
	{
		printf("%d",a[b[i]-1]);
		printf("\n");
	}
	
	return 0;
}