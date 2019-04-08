int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
		printf("End");
	else{
		while(n!=1)
		{
			if(n%2!=0)
			{
				printf("%d",n);
				n=n*3+1;
				printf("*3+1=%d\n",n);
			}
			if(n%2==0)
			{
				printf("%d",n);
				n=n/2;
				printf("/2=%d\n",n);
			}
		}
		if(n==1)
		{
			printf("End");
		}
	}
				
	return 0;
}