int main ()
{
	int n, x, y, sum;
	cin >> n;
	x = 1;
	sum = 0;
	do
	{
		y = x % 7;
		if ( y == 0 ) x = x + 1;
		else
		{
			y = x % 10;
			if ( y == 7 ) x = x + 1;
			else
			{
				y = x / 10;
				if ( y == 7 ) x = x + 1;
				else
					sum = sum + x * x;
					x = x + 1;
			}
		}
	}
	while ( x <= n );
	cout << sum;
	return 0;
}