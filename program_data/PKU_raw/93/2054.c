main()
{
	int a,b,c,n;
	scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0)
		if(b==0||c==0)
			printf("3 ");
		else printf("3");
	if(b==0)
		if(c==0)
			printf("5 ");
		else printf("5");
	if(c==0)
		printf("7");
	else ;
	if(a!=0&&b!=0&&c!=0)
		printf("n");
	else ;
	printf("\n");
}