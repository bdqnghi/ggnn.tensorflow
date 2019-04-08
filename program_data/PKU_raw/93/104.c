int main()
{
	int i;
	scanf("%d",&i);
	if(i%3==0) 
	{printf("3");
	if(i%5==0)
		printf(" 5");
	if(i%7==0)
    	printf(" 7");
	}
    else if(i%5==0) 
	{
		printf("5");
	    if(i%7==0)
		printf(" 7");
	}
	else if(i%7==0)
	{
	printf("7");
	}
	else
	{printf("n");
	}
	return 0;
}

