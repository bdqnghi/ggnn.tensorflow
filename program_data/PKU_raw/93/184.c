void main()
{
	int n,num;
	scanf("%d",&num);
	if(num%3==0)
	{if(num%5==0)
	{if(num%7==0)
	printf("%d %d %d",3,5,7);
	else
		printf("%d %d",3,5);
	}
	else if(num%7==0)
		printf("%d %d",3,7);
	else printf("%d",3);
	}
	else
		if(num%5==0)
		{if(num%7==0)
		printf("%d %d",5,7);
		else printf("%d",5);
		}
		else if(num%7==0)
			printf("%d",7);
		else
			printf("n");
}




