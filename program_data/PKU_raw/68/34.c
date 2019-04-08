
int isPrime(int n)
{
	int i;
	if (n%2 == 0)
		return 0;
	for (i=3; i<=sqrt(n); i++)
	{
		if ( n%i == 0 )
			return 0;
	}

	return 1;
}

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (i=6; i<=n; i+=2)
	{
		if (isPrime(i-2))
			printf("%d=%d+%d\n", i, 2, i-2);
		for (j=3; j<n/2; j+=2)
		{
			if (isPrime(j) && isPrime(i-j))
			{
				printf("%d=%d+%d\n", i, j, i-j);
				break;
			}
		}
	}
	return 0;
}