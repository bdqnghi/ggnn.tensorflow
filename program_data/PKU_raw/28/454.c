int main()
{
	char a[100];
	int n=0,t=0;
	scanf("%s",a);
	printf("%d",strlen(a));
	while(scanf("%s",a)!=EOF)
	{
		printf(",%d",strlen(a));
	}
	return 0;
}