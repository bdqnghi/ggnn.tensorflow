int main()
{
	int n,flag=0;
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("3");
		flag=1;
	}
	if(n%5==0)
	{
		if(flag)
			printf(" ");
		printf("5");
		flag=1;
	}
	if(n%7==0)
	{
		if(flag)
			printf(" ");
		printf("7");
		flag=1;
	}
	if(flag==0)
		printf("n");
	return 0;
}