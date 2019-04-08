int main()
{
	int a;
	scanf("%d",&a);
	if(a>=7)
	{
		if(a%7==0)
		{
			if(a%5==0)
			{
				if(a%3==0)
				{
					printf("3 5 7\n");
				}
				else
				{
					printf("5 7\n");
				}
			}
			else
			{
				if(a%3==0)
				{
					printf("3 7\n");
				}
				else
				{
					printf("7\n");
				}
			}

		}
		else
		{
			if(a%5==0)
			{
				if(a%3==0)
				{
					printf("3 5\n");
				}
				else
				{
					printf("5\n");
				}
			}
			else
			{
				if(a%3==0)
				{
					printf("3\n");
				}
				else
				{
					printf("n\n");
				}
			}
		}
	}
	else
	{
		if(a==6||a==3)
		{
			printf("3\n");
		}
		else
		{
			if(a==5)
			{
				printf("5\n");
			}
			else
			{
				printf("n\n");
			}
		}
	}
	return 0;
}