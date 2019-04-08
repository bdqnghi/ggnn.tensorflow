int main()
{
	int n, i, a, b, c, x = 0, sum = 0;
	cin >> n;
	for ( i = 1; i <= n; i ++ )
	{
		cin >> a >> b >> c;
		if ( b > c )
		{
			x = b;
			b = c;
			c = x;
		}
		if ( ( a % 400 == 0 ) || ( a % 100 != 0 && a % 4 == 0 ) )
		{
			for ( ; b < c; b ++ )
			{
				if ( b == 2 )
					sum = sum + 29;
				else if ( b == 4 || b == 6 || b == 9 || b == 11 )
					sum = sum + 30;
				     else sum = sum + 31;
			}
		}
		else 
		{
			for ( ; b < c; b ++ )
			{
				if ( b == 2 )
					sum = sum + 28;
				else if ( b == 4 || b == 6 || b == 9 || b == 11 )
					sum = sum + 30;
				     else sum = sum + 31;
			}

		}
		if ( sum % 7 == 0 )
			cout << "YES" << endl;
		else cout << "NO" << endl;
		sum = 0;
		x = 0;
		a = 0; b = 0; c = 0;
	}
	return 0;
}
