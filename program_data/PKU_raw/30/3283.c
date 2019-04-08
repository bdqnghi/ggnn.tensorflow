

int cor(int x);

int main()
{
	int n;
	scanf("%d",&n);
	int sum = 0;
	int i;
	for ( i = 0 ; i <= n ; i++ )
	{
		if ( cor(i) == 1 )
		{
			//printf("%d\n",i);
			sum += i*i ;
		}
	}
	printf("%d\n",sum);
	return 0;
}

int cor ( int x )
{
	if ( x % 7 == 0 )
	{
		return 0;
	}
	int i = 10;
	do 
	{
		if ( x % i == 7 )
		{
			return 0;
		}
		else
		{
			x = x / i;
		}
		i *= i;
	}while ( x != 0 );
	return 1;
}