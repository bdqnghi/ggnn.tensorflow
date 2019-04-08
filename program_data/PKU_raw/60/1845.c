
int judgeprime(int x);
int main()
{
	int input;
	int counter=0;
	scanf("%d",&input);
	int i2;
	for (i2=2;i2<=(input-2);i2++)
	{
		if (judgeprime(i2)&&judgeprime(i2+2))
		{
			printf("%d %d\n",i2,i2+2);
			counter++;
		}
	}
	if (0==counter)
	{
		printf("empty");
	}
	return 0;
}

int judgeprime(int x)
{
	int i1;
	int flag_prime=1;
	if (2==x)
	{
		flag_prime=1;
	}
	for (i1=2;i1<=sqrt((float)x)+1;i1++)
	{
		if (0==x%i1)
		{
			flag_prime=0;
		}
	}
	if (0==flag_prime)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}