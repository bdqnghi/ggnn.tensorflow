void main()
{
	int a,b,c,space=0;
	scanf("%d",&a);
	b=a%3;c=a%5;
	if(a%3==0) 
	{
		printf("3"); 
		space=1;
	}
	if(a%5==0)
	{
		if(space==1) printf(" ");
		printf("5");
		space=1;
	}
	if(a%7==0)
	{
		if(space==1) printf(" ");
		printf("7");
	}
	else if(b>0&&c>0)
		printf("n");
}