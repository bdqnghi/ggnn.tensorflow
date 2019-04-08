int main()
{
	int num;
	scanf("%d",&num);
	if(num%3==0)
	{
		printf("3");
		if(num%5==0)
		{
			printf(" %d",5);
			if(num%7==0)
				printf(" %d",7);
		}
		else if(num%7==0)
			printf(" %d",7);
	}
	else if(num%5==0)
		{
			printf("%d",5);
			if(num%7==0)
				printf(" %d",7);
		}
	else if(num%7==0)
			printf("%d",7);
	else
		printf("n");
	return 0;
}
