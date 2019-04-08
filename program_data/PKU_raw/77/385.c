//
//	?????	????
//	?????	?????????????????????????????????????????????
//	?????	?	? ? ? ?? 1000012733 ?
//	?????	2010 ? 12 ? 31 ?
//
void line ( char *p, int *q, int len )
{
	int i, j;
	for ( i = 0; i < len; i++ )
	{
		if ( *( p + i ) == *p )
		{
			for ( j = i + 1; j < len; j++ )
			{
				if ( *( q + j ) == 0 )
					continue;
				else
				{
					if ( *( p + j ) != *( p + i ) )
					{
						cout << i << " " << j << endl;
						*( q + i ) = 0;
						*( q + j ) = 0;
						line ( p, q, len );
					}
					else
						break;
				}
			}
		}
	}
}
int main()
{
	char string[1000];
	int sign[1000];
	int len, i;
	cin.getline ( string, 1000 );
	len = strlen ( string );
	for ( i = 0; i < len; i++ )
	{
		sign[i] = 1;
	}
	line ( string, sign, len );
	return 0;
}