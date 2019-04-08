int main(int argc, char* argv[])
{
	int n,i,b;
	scanf("%d",&n);
	int a[1000];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b);
		a[i]=b;
	}
	for(i=n;i>1;i--)
	{
		b=a[i];
		printf("%d ",b);
	}
	b=a[1];
	printf("%d",b);
	return 0;
}
