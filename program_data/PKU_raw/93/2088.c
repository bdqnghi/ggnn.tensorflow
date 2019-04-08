void main()
{
	int n,i;
	scanf("%d",&n);
	i=0;
	if ((n%3)==0)
		if (i==0)
		{
			printf("3");
			i=1;
		}
		else
			printf(" 3");
			if ((n%5)==0)
		if (i==0)
		{
			printf("5");
			i=1;
		}
		else
			printf(" 5");
			if ((n%7)==0)
		if (i==0)
		{
			printf("7");
			i=1;
		}
		else
			printf(" 7");
		if (i==0)
			printf("n");
}