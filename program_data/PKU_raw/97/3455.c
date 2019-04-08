void f1(int a);
void main()
{
	int RMB;
	scanf("%d",&RMB);
	f1(RMB);
}
void f1(int a)
{
	int b;
	if(a>=100)
	{
		b=a/100;
		printf("%d\n",b);
		a=a-b*100;
	}
	else 
	{
		printf("0\n");
	}
	if(a>=50)
	{
		printf("1\n");
		a=a-50;
	}
	else 
	{
		printf("0\n");
	}
	if(a>=20)
	{
		b=a/20;
		printf("%d\n",b);
		a=a-b*20;
	}
	else printf("0\n");
	if(a>=10)
	{
		printf("1\n");
		a=a-10;
	}
	else printf("0\n");
	if(a>=5)
	{
		printf("1\n");
		a=a-5;
	}
	else printf("0\n");
	printf("%d",a);
}