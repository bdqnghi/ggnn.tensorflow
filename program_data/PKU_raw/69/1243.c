
int main()
{
	char a[250];
	char b[250];
	scanf("%s",a);
	scanf("%s",b);
	int i = 0;
	int j = 0;
	while ( a[i] != '\0' )
	{
		i++;
	}
	while ( b[j] != '\0' )
	{
		j++;
	}
	int d;
	int k;
	if ( i - j > 0 )
	{
		d = i - j;
		for ( k = i ; k	>= i - j ; k-- )
		{
			b[k] = b[k-d];
		}
		for ( k = 0 ; k < i - j ; k++ )
		{
			b[k] = '0';
		}
	}
	else
	{
		d = j - i;
		for ( k = j ; k	>= j - i ; k-- )
		{
			a[k] = a[k-d];
		}
		for ( k = 0 ; k < j - i ; k++ )
		{
			a[k] = '0';
		}
	}
	int max;
	if ( i > j )
	{
		max = i;
	}
	else
	{
		max = j;
	}
	char c[251];
	c[max+1] = '\0';
	c[0] = '0';
	for ( k = max - 1 ; k >= 0 ; k-- )
	{
		c[k+1] = a[k] + b[k] - 48;
		if ( c[k+1] > '9' )
		{
			c[k+1] -= 10;
			if ( k != 0 )
			{
				a[k-1] += 1;
			}
			else
			{
				c[0] = '1';
			}
		}
	}
	//printf("%s\n",c);
	int count = 0;
	for ( k = 0 ; k <= max ; k++ )
	{
		if ( c[k] != '0' && count == 0 )
		{
			printf("%c",c[k]);
			count++;
			continue;
		}
		if ( count != 0 )
		{
			printf("%c",c[k]);
		}
		//printf("%d\n",k);
	}
	printf("\n");
	return 0;
}