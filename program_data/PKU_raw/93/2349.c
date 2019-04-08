void main()
{
	int a,b,c,i;
	scanf("%d",&a);
	b=1;
		if(a%3==0)
		{printf("3");b++;}
		if(a%5==0)
		{
			if(b==1)
			{printf("5");b++;}
			else
			printf(" 5");
		}
		if(a%7==0)
		{
			if(b==1)
			{printf("7");b++;}
			else
			printf(" 7");
		}
	if(b==1)
		printf("n");
}
