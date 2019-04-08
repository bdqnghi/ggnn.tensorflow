int main()
{
	int n,i;
	scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%7==0)
	{
		printf("3 5 7");
	}
	else if(n%3==0&&n%5==0)
	{
		printf("3 5");
	}
	else if(n%3==0&&n%7==0)
	{
		printf("3 7");
	}	
	else if(n%5==0&&n%7==0)
	{
		printf("5 7");
	}
	else {
		for(i=3;i<8;i=i+2)
		{
		if(n%i==0)
	{
		printf("%d",i);
	}
		}
	}
	if(n%3!=0&&n%5!=0&&n%7!=0)
	{
		printf("n");
	}
     return 0;
}
