// ???.cpp: ??????
//???
//1000062701
int main()
{
	int a, b, c, x, y, z;
	for( a = 0; a < 3; a++ )
		for( b = 0; b < 3; b++ )
			for( c = 0; c < 3; c++ )
			{
				x = ( b > a ) + ( c == a );
				y = ( a > b ) + ( a > c );
				z = ( c > b ) + ( b > a );
				if( a + x == 2&& b + y == 2 && c + z == 2 )
				{
					if( a > b )
						if( b > c)
							cout << "CBA" << endl;
						else
							cout << "BCA" << endl;
					if( c > a )
						if( a > b )
							cout << "BAC" << endl;
						else
							cout << "ABC" << endl;
					if( b > a )
						if( c > a )
							cout << "ACB" << endl;
						else
							cout << "CAB" << endl;
				}
			}
	return 0;
}