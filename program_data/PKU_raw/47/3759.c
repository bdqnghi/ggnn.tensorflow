int main()
{
	int n;
	scanf("%d",&n);
	int *num;
	num=(int*)malloc(n);
	int j,a;
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a);
			*(num+j)=a;
	}
	for(j=n;j>1;j--)
	{
		printf("%d ",*(num+j));
	}
	printf("%d\n",*(num+1));
	return 0;
}