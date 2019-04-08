int main()
{
	int x;
	int flag=0;

	scanf("%d", &x);

	if (x%3==0)
	{
		printf("3");
		flag = 1;
	}
	if (x%5==0)
	{
		if (flag==1)
		{
			printf(" ");
		}
		flag=1;
		printf("5");

	}
	if (x%7==0)
	{
		if (flag==1)
		{
			printf(" ");
		}
		flag=1;
		printf("7");
	}
	if (x%3!=0 && x%5!=0 && x%7!=0)
	{
		printf("n");
	}

	return 0;
}