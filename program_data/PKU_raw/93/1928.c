
int main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
			if(a%7==0)
				printf("%d %d %d\n",3,5,7);
			else
				printf("%d %d\n",3,5);
		}
		else
		{
			if(a%7==0)
				printf("%d %d\n",3,7);
			else
				printf("%d\n",3);
		}
	}
	else
	{
     if(a%5==0)
		{
			if(a%7==0)
				printf("%d %d\n",5,7);
			else
				printf("%d\n",5);
		}
		else
		{
			if(a%7==0)
				printf("%d\n",7);
			else
				printf("n\n");
		}
	}
}