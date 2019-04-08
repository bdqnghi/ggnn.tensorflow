void main()
{
	int n,a=0,b=0,c=0;
	scanf("%d",&n);
	if(n%3==0) 
	{
		printf("3");
	}
	else a=1;
	if(n%5==0&&a==0) 
	{
		printf(" 5");
	}
	else if(n%5==0&&a==1) printf("5");
	else b=1;
	if(n%7==0&&(a*b==0)) 
	{
		printf(" 7");
	}
	else if(n%7==0&&(a*b==1)) printf("7");
	else c=1;
	if(a*b*c) printf("n");
}