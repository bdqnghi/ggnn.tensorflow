
int p(long a)
{
	int i;
	for(i = 2; i <= sqrt(a); i++)
	{
		if(a % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	long n, i, t;
	scanf("%ld", &n);
	for(i = 6; i <= n; i += 2)
	{
		for(t = 2; t <= i / 2; t++)
		{
			if(p(t))
				if(p(i - t))
				{
					printf("%ld=%ld+%ld\n", i, t, i - t);
					break;
				}
		}
	}
	return 0;
}