void main()
{
	int num;
	scanf("%d",&num);
	if(num%3==0)
	{printf("3");}
	if(num%5==0)
	{
		if(num%3==0)
			printf(" 5");
		if(num%3!=0)
			printf("5");
	}
	if(num%7==0)
	{
		if(num%3==0||num%5==0)
			printf(" 7");
		if(num%3!=0&&num%5!=0)
			printf("7");
	}
	if(num%3!=0&&num%5!=0&&num%7!=0) 
	{printf("n");}
}