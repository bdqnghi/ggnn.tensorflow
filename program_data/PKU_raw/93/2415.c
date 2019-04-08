int main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
		printf("%d %d %d",3,5,7);
	else
	{
		if(a%3==0&&a%5==0)
			printf("%d %d\n",3,5);
		else 
		{
			if(a%3==0&&a%7==0)
				printf("%d %d",3,7);
			else
			{
				if(a%5==0&&a%7==0)
					printf("%d %d",5,7);
				else
				{
					if(a%3==0)
						printf("%d",3);
					else 
					{
						if(a%5==0)
							printf("%d",5);
						else
						{
							if(a%7==0)
								printf("%d",7);
							else
								printf("n\n");
						}
					}
				}
			}
		}
	}
	return 0;
}
		
		