int flag,n;
void main()
{
	scanf("%d",&n);
	flag=0;
	if (n%3==0)
	{printf("3");flag=1;}
	if (n%5==0)
	{
		if (flag==0)
		{printf("5");flag=1;}
		else
			printf(" 5");
	}
	if (n%7==0)
	{
		if (flag==0)
		{printf("7");flag=1;}
		else
			printf(" 7");
	}
	if (flag==0) printf("n");
	printf("\n");
}
		    
		