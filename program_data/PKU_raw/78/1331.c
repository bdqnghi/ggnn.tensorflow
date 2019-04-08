int main ()
{
	int i, z, q, s, l, CC1, CC2, CC3;
	char str[6];
	for ( z = 1; z <= 5; z++ )
	{
		for ( q = 1; q <= 5; q++ )
		{
			for ( s = 1; s <= 5; s++ )
			{
				for ( l = 0; l <= 5; l++ )
				{
					CC1 = ( ( z + q ) == ( s + l ) );
					CC2 = ( ( z + l ) > ( s + q ) );
					CC3 = ( ( z + s ) < q );
					if ( ( CC1 + CC2 + CC3 == 3) && ( z != q) && ( z != s ) && ( z != l ) && ( q != s) && ( q != l ) && ( s != l) )
					{
						str[ 6 - z ] = 'z';
						str[ 6 - q ] = 'q';
						str[ 6 - s ] = 's';
						str[ 6 - l ] = 'l';
					}	
				}
			}
		}
	}
	for ( i = 1; i <= 6; i++ )
	{
		if ( str[i] == 'z' || str[i] == 'q' || str[i] == 's' || str[i] == 'l' )
			cout << str[i] << " " << ( 6 - i ) * 10 << endl;
	}
	return 0;
}

