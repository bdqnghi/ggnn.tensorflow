

int main()
{
	int n,i,a[100];
	int *b[100];
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
for(i=1;i<=n;i++)

	{
		b[i]=&a[n+1-i];
		
	}

printf("%d",*b[1]);
	for(i=2;i<=n;i++)
	{

	
		printf(" %d",*b[i]);
	}




	return 0;
}