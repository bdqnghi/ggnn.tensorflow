
int monkeyApple( int n, int k)
{
	int i, left, flag,sum;
	for(left = 1; ;left++)
	{
		flag = 1;
		sum = left;
		for( i = 1; i < n; i ++)
		{
			if( (n * sum + k) % (n-1) != 0 )
			{
				flag = 0;
				break;
			}
            sum = (n * sum + k) / (n-1);
		}

		if(i == n && flag == 1)
		{
			sum = n*sum + k;
			break;
		}
	}

	return sum;

}



int main()
{
	int n, k;
	scanf("%d%d", &n, &k);


	printf("%d\n", monkeyApple(n,k));

	return 0;

}