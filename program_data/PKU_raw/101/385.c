int main()
{
	int a, b, c, i;
	char str[3];
	for( a = 0; a < 3; a++ )
	{
		for( b = 0; b < 3; b++ )
		{
			for( c = 0; c < 3; c++ )
			{
				if( (b > a) + (c == a) + a == 2 &&
					(a > b) + (a > c) + b == 2 &&
					(c > b) + (b > a) + c == 2 &&
					a != b && a != c && b != c )
				{
					str[a] = 'A';
					str[b] = 'B';
					str[c] = 'C';
					for( i = 0; i < 3; i++ )
					{
						cout << str[i];
					}
				}
			}
		}
	}
	cout << endl;
	return 0;
}

