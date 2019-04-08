int main()
{
	int n,i;
	scanf("%d",&n);
	do
	{
		printf("%d",(n%10));
		n=(int)n/10;
	}while (n>0);
	return 0;
}
		