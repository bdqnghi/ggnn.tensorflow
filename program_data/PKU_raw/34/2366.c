int n;

int main()
{
	scanf("%d",&n);
	while (n%2==1)
	{
		if(n==1)
		{
			printf("End");
			break;
		}
		printf("%d*3+1=",n);
		n=n*3+1;
		printf("%d\n",n);
		while(n%2==0)
		{
			printf("%d/2=",n);
			n=n/2;
			printf("%d\n",n);
		}
		if(n==1)
		{
			printf("End");
			break;
		}
	}
	while (n%2==0)
	{
		printf("%d/2=",n);
		n=n/2;
		printf("%d\n",n);
		if(n==1)
		{
			printf("End");
			break;
		}
		while (n%2==1)
		{
			printf("%d*3+1=",n);
			n=n*3+1;
			printf("%d\n",n);
		
	
		}
	}
	return 0;
}