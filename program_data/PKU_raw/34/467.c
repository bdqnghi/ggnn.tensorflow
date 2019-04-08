int main()
{
	int n,a;
	scanf("%d",&n);
	if(n==1)
	{
		printf("End");
	}
	else
	{
		while(n!=1)
		{
			if(n%2!=0)
			{
				a=n*3+1;
				printf("%d*3+1=%d\n",n,a);
			}
			else
			{
				a=n/2;
				printf("%d/2=%d\n",n,a);
			}
			n=a;
		}
		printf("End\n");
	}
	return 0;
}




	





		

	