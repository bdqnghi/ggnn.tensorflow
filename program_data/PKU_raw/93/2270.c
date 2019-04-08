void main()
{
	int n,i=0;
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("3");
		i++;
	}
	if(n%5==0)
	{
		if(i>=1) putchar(' ');
		printf("5");
		i++;
	}
	if(n%7==0)
	{
		if(i>=1) putchar(' ');
		printf("7");
		i++;
	}
	if(i==0)
		putchar('n');
	getchar();
	getchar();
	getchar();
	getchar();
}