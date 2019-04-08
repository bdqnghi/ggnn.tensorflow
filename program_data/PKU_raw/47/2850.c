
int main()
{
	int x[100];
	int n,i;
	int *p=NULL;
	scanf("%d",&n);
	p=&x[0];
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	{
		if(i!=0)
			printf(" ");
		printf("%d",*(p+n-i-1));
	}
	printf("\n");
	return 0;
}