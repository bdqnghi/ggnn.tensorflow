void main()
{
	int n;
	scanf("%d",&n);
	void print1(int n);
	void print2(int n);
	int printf1(int n);
	int printf2(int n);
	if(n==1)printf("End\n");
	else
	{
		int i;
		for(;n!=1;)
		{
			if(n%2==0)
			{
				print1(n);
				n=printf1(n);
			}
			else
			{
				print2(n);
				n=printf2(n);
			}
		}
		printf("End\n");
	}
}
int printf1(int n)
{
	int m;
	m=n/2;
	return m;
}
void print1(int n)
{
	printf("%d/2=%d\n",n,n/2);
}
int printf2(int n)
{
	int m;
	m=n*3+1;
	return m;
}
void print2(int n)
{
	printf("%d*3+1=%d\n",n,n*3+1);
}

	
	
	
