int main()
{
	int change(int);
	int n;
	scanf("%d",&n);
	if(n==1)
		printf("End\n");
	else
	{
		do
		{
			n=change(n);
		}while(n!=1);
		printf("End\n");
	}
	return 0;
}

int change(int n)
{
	int a;
	if(n%2==0)
	{
		a=n/2;
		printf("%d/2=%d\n",n,a);
	}
	else
	{
		a=n*3+1;
		printf("%d*3+1=%d\n",n,a);
	}
	return a;
}