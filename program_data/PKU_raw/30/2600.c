int main()
{
	int n;
	int sum = 0;
	cin >> n;
	for( int i = 1; i <= n; i ++)//i?1?n????
	{
		int n1 = i;
		//???????
		int A = ( i % 7 != 0 );
		//???????
		int B = 1;
		while( n1 >= 1 )
		{
			if( (n1 - n1 / 10 * 10) == 7)
			{
				B = 0;
				break;
			}
			n1 = n1 / 10;
		}
		if( ( A && B ) == 1 )
			sum = sum + i * i;
	}
	cout << sum;
	return 0;
}