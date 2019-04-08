int main()
{
	int m = 6, n, odd;
	int prime(int x);
	scanf("%d", &n);
    while(m <= n)
	{
		odd = 3;
		while(odd < m)
		{
			if(prime(odd) == 1)
			{
				if(prime(m - odd) == 1)
				{
					printf("%d=%d+%d\n", m, odd, m - odd);
					break;
				}
				else
					odd += 2;
			}
			else
				odd += 2;
		}
	    m += 2;
	}
    return 0;
}

int prime(int x)
{
	int i;
	for(i=3;i<=sqrt(x)+1;i+=2)
	{
		if(x%i == 0)
		{
			return 0;
		}

	}
    return 1;
}

