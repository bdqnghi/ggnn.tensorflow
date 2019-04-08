
int main()
{
	int a , b , c , d , e ;
	for( a = 1 ; a < 6 ; a ++ )
		for( b = 1 ; b < 6 ; b ++ )
		{
			if( b == a ) continue ;
			for( c = 1 ; c < 6 ; c ++ )
			{if( c == b || c == a ) continue ;
				for( d = 1 ; d < 6 ; d ++ )
				{if( d == a || d == b || d == c ) continue ;
					for( e = 1 ; e < 6 ; e ++ )
					{
						if( e == a || e == b || e == c || e == d || e == 2 || e == 3 ) continue ;
						if( ( e != 1 ^ a == 1 || a == 2 ) &&
								( b != 2 ^ b == 1 || b == 2 ) &&
								( a != 5 ^ c == 1 || c == 2 ) &&
								( c == 1 ^ d == 1 || d == 2 ) &&
								( d != 1 ^ e == 1 || e == 2 ))
						{
							cout << a << " " << b << " " << c << " " << d << " " << e << endl ;
							a = b = c = d = e = 6 ;
						}
					}
				}
			}
		}
     return 0 ;
}
