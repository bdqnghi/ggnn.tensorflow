

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("End\n");
		return 0;
	}
	int a=n;
	for(;a!=1;)
	{
		if(a%2!=0)
		{
			a=n*3+1;
			printf("%d*3+1=%d\n",n,a);
			n=a;
		}
		else
		{
			a=n/2;
			printf("%d/2=%d\n",n,a);
			n=a;
		}
	}
	printf("End\n");
	return 0;
}



